#pragma warning(disable:4302)
#pragma warning(disable:4311)
#pragma warning(disable:4312)
#pragma warning(disable:4996)
#pragma warning(disable:6011)
#pragma warning(disable:6386)
#pragma warning(disable:6387)
#include "framework.h"
#include "cbu.h"
#define LINETYPE_MANUAL         0
#define LINETYPE_SEMIAUTOMATIC  1
#define LINETYPE_FULLAUTOMATIC  2
#define LINETYPE_FLEXIBLE       3
#define LINETYPE_RENTED         4
#define PRODUCTTYPE_NONE        -1
#define PRODUCTTYPE_1           0
#define PRODUCTTYPE_2           1
#define PRODUCTTYPE_3           2
#define PRODUCTTYPE_4           3
#define PRODUCTTYPE_5           4
#define MAX_LOADSTRING  100
#define WNDX            800
#define WNDY            600
#define BTN_CANCEL     (HMENU)1000
#define MSG_CANCEL     (WPARAM)(WM_USER + 1100)
#define MSG_GAME       (WPARAM)(WM_USER + 99)
#define BTN_LOAN       (HMENU)1
#define MSG_LOAN       (WPARAM)(WM_USER + 101)
#define BTN_LOANC1     (HMENU)15
#define MSG_LOANC1     (WPARAM)(WM_USER + 115)
#define BTN_LOANC2     (HMENU)16
#define MSG_LOANC2     (WPARAM)(WM_USER + 116)
#define BTN_LLOAN      (HMENU)11
#define MSG_LLOAN      (WPARAM)(WM_USER + 111)
#define BTN_LLOANTB1   (HMENU)13
#define MSG_LLOANTB1   (WPARAM)(WM_USER + 113)
#define BTN_LLOANTB2   (HMENU)14
#define MSG_LLOANTB2   (WPARAM)(WM_USER + 114)
#define BTN_SLOAN      (HMENU)12
#define MSG_SLOAN      (WPARAM)(WM_USER + 112)
#define BTN_SLOANTB    (HMENU)17
#define MSG_SLOANTB    (WPARAM)(WM_USER + 117)
#define BTN_PLANT      (HMENU)2
#define MSG_PLANT      (WPARAM)(WM_USER + 102)
#define BTN_PBUY       (HMENU)20
#define MSG_PBUY       (WPARAM)(WM_USER + 120)
#define BTN_PSELL      (HMENU)21
#define MSG_PSELL      (WPARAM)(WM_USER + 121)
#define BTN_G11U      (HMENU)22
#define MSG_G11U      (WPARAM)(WM_USER + 122)
#define BTN_G11D      (HMENU)23
#define MSG_G11D      (WPARAM)(WM_USER + 123)
#define BTN_PRENT      (HMENU)24
#define MSG_PRENT      (WPARAM)(WM_USER + 124)
#define BTN_PLSUS      (HMENU)38
#define MSG_PLSUS      (WPARAM)(WM_USER + 138)
#define BTN_PSUS1      (HMENU)39
#define MSG_PSUS1      (WPARAM)(WM_USER + 139)
#define BTN_PSUS2      (HMENU)40
#define MSG_PSUS2      (WPARAM)(WM_USER + 140)
#define BTN_PSUS3      (HMENU)41
#define MSG_PSUS3      (WPARAM)(WM_USER + 141)
#define BTN_PSEL1      (HMENU)42
#define MSG_PSEL1      (WPARAM)(WM_USER + 142)
#define BTN_LINE       (HMENU)44
#define MSG_LINE       (WPARAM)(WM_USER + 144)
#define BTN_LBUY       (HMENU)45
#define MSG_LBUY       (WPARAM)(WM_USER + 145)
#define BTN_LSELL      (HMENU)33
#define MSG_LSELL      (WPARAM)(WM_USER + 133)
#define BTN_LRENT      (HMENU)47
#define MSG_LRENT      (WPARAM)(WM_USER + 147)
#define BTN_LLSUS      (HMENU)48
#define MSG_LLSUS      (WPARAM)(WM_USER + 148)
#define BTN_DVLP       (HMENU)4
#define MSG_DVLP       (WPARAM)(WM_USER + 104)
#define BTN_MTR        (HMENU)5
#define MSG_MTR        (WPARAM)(WM_USER + 105)
#define BTN_MKT        (HMENU)6
#define MSG_MKT        (WPARAM)(WM_USER + 106)
#define BTN_ISO        (HMENU)7
#define MSG_ISO        (WPARAM)(WM_USER + 107)
#define BTN_NEXT       (HMENU)8
#define MSG_NEXT       (WPARAM)(WM_USER + 108)
#define BTN_SUMUP      (HMENU)30
#define MSG_SUMUP      (WPARAM)(WM_USER + 130)
#define BTN_PRDC       (HMENU)58
#define MSG_PRDC       (WPARAM)(WM_USER + 158)
#define BTN_ORDR       (HMENU)59
#define MSG_ORDR       (WPARAM)(WM_USER + 159)
#define BTN_ORDRR      (HMENU)60
#define MSG_ORDRR      (WPARAM)(WM_USER + 160)
#define BTN_ORDRS1     (HMENU)61
#define MSG_ORDRS1     (WPARAM)(WM_USER + 161)
#define BTN_ORDRS2     (HMENU)62
#define MSG_ORDRS2     (WPARAM)(WM_USER + 162)
#define BTN_ORDRS3     (HMENU)25
#define MSG_ORDRS3     (WPARAM)(WM_USER + 125)
#define BTN_ORDRS4     (HMENU)26
#define MSG_ORDRS4     (WPARAM)(WM_USER + 126)
#define BTN_ORDRS5     (HMENU)27
#define MSG_ORDRS5     (WPARAM)(WM_USER + 127)
#define BTN_ORDRS6     (HMENU)28
#define MSG_ORDRS6     (WPARAM)(WM_USER + 128)
#define BTN_PDV1       (HMENU)63
#define MSG_PDV1       (WPARAM)(WM_USER + 163)
#define BTN_PDV2       (HMENU)64
#define MSG_PDV2       (WPARAM)(WM_USER + 164)
#define BTN_PDV3       (HMENU)65
#define MSG_PDV3       (WPARAM)(WM_USER + 165)
#define BTN_PDV4       (HMENU)66
#define MSG_PDV4       (WPARAM)(WM_USER + 166)
#define BTN_MDV1       (HMENU)67
#define MSG_MDV1       (WPARAM)(WM_USER + 167)
#define BTN_MDV2       (HMENU)68
#define MSG_MDV2       (WPARAM)(WM_USER + 168)
#define BTN_MDV3       (HMENU)69
#define MSG_MDV3       (WPARAM)(WM_USER + 169)
#define BTN_MDV4       (HMENU)70
#define MSG_MDV4       (WPARAM)(WM_USER + 170)
#define BTN_MDV5       (HMENU)71
#define MSG_MDV5       (WPARAM)(WM_USER + 171)
#define BTN_IDV1       (HMENU)72
#define MSG_IDV1       (WPARAM)(WM_USER + 172)
#define BTN_IDV2       (HMENU)73
#define MSG_IDV2       (WPARAM)(WM_USER + 173)
#define MSG_FAIL       (WPARAM)(WM_USER + 174)
#define BTN_MTR1P      (HMENU)75
#define MSG_MTR1P      (WPARAM)(WM_USER + 175)
#define BTN_MTR2P      (HMENU)76
#define MSG_MTR2P      (WPARAM)(WM_USER + 176)
#define BTN_MTR3P      (HMENU)77
#define MSG_MTR3P      (WPARAM)(WM_USER + 177)
#define BTN_MTR4P      (HMENU)78
#define MSG_MTR4P      (WPARAM)(WM_USER + 178)
#define BTN_MTR1M      (HMENU)79
#define MSG_MTR1M      (WPARAM)(WM_USER + 179)
#define BTN_MTR2M      (HMENU)80
#define MSG_MTR2M      (WPARAM)(WM_USER + 180)
#define BTN_MTR3M      (HMENU)81
#define MSG_MTR3M      (WPARAM)(WM_USER + 181)
#define BTN_MTR4M      (HMENU)82
#define MSG_MTR4M      (WPARAM)(WM_USER + 182)
#define BTN_MTRCFM     (HMENU)83
#define MSG_MTRCFM     (WPARAM)(WM_USER + 183)
#define BTN_PRD1       (HMENU)84
#define MSG_PRD1       (WPARAM)(WM_USER + 184)
#define BTN_PRD2       (HMENU)85
#define MSG_PRD2       (WPARAM)(WM_USER + 185)
#define BTN_PRD3       (HMENU)86
#define MSG_PRD3       (WPARAM)(WM_USER + 186)
#define BTN_PRD4       (HMENU)87
#define MSG_PRD4       (WPARAM)(WM_USER + 187)
#define BTN_PRDV       (HMENU)88
#define MSG_PRDV       (WPARAM)(WM_USER + 188)
#define BTN_ORDRCTB1   (HMENU)89
#define MSG_ORDRCTB1   (WPARAM)(WM_USER + 189)
#define BTN_ORDRCTB2   (HMENU)96
#define MSG_ORDRCTB2   (WPARAM)(WM_USER + 196)
#define BTN_ORDRCTB3   (HMENU)97
#define MSG_ORDRCTB3   (WPARAM)(WM_USER + 197
#define BTN_ORDRCTB4   (HMENU)98
#define MSG_ORDRCTB4   (WPARAM)(WM_USER + 198)
#define BTN_ORDRCTB5   (HMENU)99
#define MSG_ORDRCTB5   (WPARAM)(WM_USER + 199)
#define BTN_ORDRCC     (HMENU)3
#define MSG_ORDRCC     (WPARAM)(WM_USER + 103)
#define BTN_ORDRC      (HMENU)9
#define MSG_ORDRC      (WPARAM)(WM_USER + 109)
#define BTN_ORDR1      (HMENU)90
#define MSG_ORDR1      (WPARAM)(WM_USER + 190)
#define BTN_ORDR2      (HMENU)91
#define MSG_ORDR2      (WPARAM)(WM_USER + 191)
#define BTN_ORDR3      (HMENU)92
#define MSG_ORDR3      (WPARAM)(WM_USER + 192)
#define BTN_ORDR4      (HMENU)93
#define MSG_ORDR4      (WPARAM)(WM_USER + 193)
#define BTN_ORDR5      (HMENU)94
#define MSG_ORDR5      (WPARAM)(WM_USER + 194)
#define BTN_ORDR6      (HMENU)95
#define MSG_ORDR6      (WPARAM)(WM_USER + 195)
int messageBuffer;
HINSTANCE hInst;  
WCHAR szTitle[MAX_LOADSTRING]; 
WCHAR szWindowClass[MAX_LOADSTRING];
WCHAR szWindowClassBtn[MAX_LOADSTRING];
int shortTermLoanLeaseSeason;
float shortTermLoanAnnualInterestRate;
float longTermLoanAnnualInterestRate;
int plantMaximum;
int largePlantLineMaximum;
int smallPlantLineMaximum;
int smallPlantRent;
int smallPlantInValue;
int smallPlantOutValue;
int largePlantRent;
int largePlantInValue;
int largePlantOutValue;
int linePrice[5];
int lineInstallCycle[5];
int lineProducingCycle[5];
int lineConvertingCost[5];
int lineConvertingCycle[5];
int lineAnnualMaintainCost[5];
int lineOriginalValue[5];
int productDevelopment[4];
int productDevelopingCostE[4];
bool productDevelopementInvested[4] = { false };
int marketDevelopment[5];
int marketDevelopingCostE[5];
bool marketDevelopementInvested[5] = { false };
int penaltyRateN[2];
int penaltyRateU[2];
int ISOt[2];
int ISOcE[2];
bool ISOi[2] = { false };
int materialNum[4];
int mtrCost[4];
int productNum[4];
int productNeeds[4][4];
int productProcessingCost[4];
int productTransportingTime[4];
int productProducingTime[4];
int productOutPrice[4];
int lineMaximumU;
int receivableIni;
const int sysX = GetSystemMetrics(SM_CXSCREEN);
const int sysY = GetSystemMetrics(SM_CYSCREEN);
bool inGame;
int year;
int season;
double sum;
int loanLimit;
int loaned;
MSG msg;
void* bufPtr;
struct LOAN {
    int seasonR[20];
    int yearT[20];
    int moneyR[20];
    int moneyT[20];
    bool isLong[20];
    bool notLoan[20];
}loan, loanbuf;
struct PLANT {
    bool own[10];
    bool isRented[10];
    bool isLarge[10];
    int seasonRenteNum[10];
}plant, plantbuf;
struct LINE {
    bool own[100];
    int lineType[100];
    int installSeasonLast[100];
    int convertingSeasonLast[100];
    int productType[100];
    int productSeasonLast[100];
    int seasonRented[100];
}line, linebuf;
struct ORDER {
    int product[10][4];
    int time[10];
    bool urgent[10];
}order, orderbuf, orderRandomBuf;
bool sranded = false;
int needs[6][4] = { 0 };
bool urgent[6] = { false };
int tim[6] = { 0 };
bool needISO14000[6] = { false };
int loanNum = 1;
int urgentOrderAppearancePercentage;
int ISOOrderAppearancePercentage;
int percentageOfOthersInScore;
int percentageOfCreditInScore;
double credit = 5;
ATOM                MyRegisterClass(HINSTANCE hInstance);
ATOM                MyRegisterClassBtn(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    Contributer(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    IniNotExist(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK    Btn(HWND, UINT, WPARAM, LPARAM);
void                DestroyAllChildWindow(HWND parent, LPCWSTR childclass);
void                CalculateLoanLimit();
int                 CalculateShowingArea(int y);
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MY, szWindowClass, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_BTN, szWindowClassBtn, MAX_LOADSTRING);
    MyRegisterClass(hInstance);
    MyRegisterClassBtn(hInstance);

    inGame = false;
    year = 1;
    season = 1;
    loan.seasonR[0] = 2;
    loan.yearT[0] = 0;
    loan.isLong[0] = false;
    loan.notLoan[0] = true;
    int buff = 0;
    int pCt = 0;
    sum = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialInvestment"), 0, TEXT("./Parameters.ini"));
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("largePlantOwn"), 0, TEXT("./Parameters.ini"));
    buff += pCt;
    if(buff != 0)
        for (int i = pCt; i < buff; i++)
        {
            if (pCt >= 3)
                break;
            pCt++;
            plant.own[i] = true;
            plant.isLarge[i] = true;
            plant.isRented[i] = false;
            plant.seasonRenteNum[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("smallPlantOwn"), 0, TEXT("./Parameters.ini"));
    buff += pCt;
    if (buff != 0)
        for (int i = pCt; i < buff; i++)
        {
            if (pCt >= 3)
                break;
            pCt++;
            plant.own[i] = true;
            plant.isLarge[i] = false;
            plant.isRented[i] = false;
            plant.seasonRenteNum[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("largePlantRented"), 0, TEXT("./Parameters.ini"));
    buff += pCt;
    if (buff != 0)
        for (int i = pCt; i < buff; i++)
        {
            if (pCt >= 3)
                break;
            pCt++;
            plant.own[i] = true;
            plant.isLarge[i] = true;
            plant.isRented[i] = true;
            plant.seasonRenteNum[i] = 1;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("smallPlantRented"), 0, TEXT("./Parameters.ini"));
    buff += pCt;
    if (buff != 0)
        for (int i = pCt; i < buff; i++)
        {
            if (pCt >= 3)
                break;
            pCt++;
            plant.own[i] = true;
            plant.isLarge[i] = false;
            plant.isRented[i] = true;
            plant.seasonRenteNum[i] = 1;
        }
    plantMaximum = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("plantMaximum"), 0, TEXT("./Parameters.ini"));
    largePlantLineMaximum = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("largePlantLineMaximum"), 0, TEXT("./Parameters.ini"));
    smallPlantLineMaximum = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("smallPlantLineMaximum"), 0, TEXT("./Parameters.ini"));
    shortTermLoanLeaseSeason = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("shortTermLoanLeaseSeason"), 0, TEXT("./Parameters.ini"));
    buff = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("shortTermLoanAnnualInterestRate_F"), 0, TEXT("./Parameters.ini"));
    shortTermLoanAnnualInterestRate = buff * 0.01;
    buff = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("longTermLoanAnnualInterestRate_F"), 0, TEXT("./Parameters.ini"));
    longTermLoanAnnualInterestRate = buff * 0.01;
    urgentOrderAppearancePercentage = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("urgentOrderAppearancePercentage"), 0, TEXT("./Parameters.ini"));
    ISOOrderAppearancePercentage = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("ISOOrderAppearancePercentage"), 0, TEXT("./Parameters.ini"));
    percentageOfOthersInScore = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("percentageOfOthersInScore"), 0, TEXT("./Parameters.ini"));
    percentageOfCreditInScore = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("percentageOfCreditInScore"), 0, TEXT("./Parameters.ini"));
    smallPlantRent = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("smallPlantRent"), 0, TEXT("./Parameters.ini"));
    smallPlantInValue = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("smallPlantInValue"), 0, TEXT("./Parameters.ini"));
    smallPlantOutValue = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("smallPlantOutValue"), 0, TEXT("./Parameters.ini"));
    largePlantInValue = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("largePlantInValue"), 0, TEXT("./Parameters.ini"));
    largePlantOutValue = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("largePlantOutValue"), 0, TEXT("./Parameters.ini"));
    largePlantRent = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("largePlantRent"), 0, TEXT("./Parameters.ini"));
    linePrice[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("linePriceTypeA"), 0, TEXT("./Parameters.ini"));
    linePrice[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("linePriceTypeB"), 0, TEXT("./Parameters.ini"));
    linePrice[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("linePriceTypeC"), 0, TEXT("./Parameters.ini"));
    linePrice[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("linePriceTypeD"), 0, TEXT("./Parameters.ini"));
    linePrice[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("linePriceTypeE"), 0, TEXT("./Parameters.ini"));
    lineInstallCycle[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineInstallCycleTypeA"), 0, TEXT("./Parameters.ini"));
    lineInstallCycle[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineInstallCycleTypeB"), 0, TEXT("./Parameters.ini"));
    lineInstallCycle[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineInstallCycleTypeC"), 0, TEXT("./Parameters.ini"));
    lineInstallCycle[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineInstallCycleTypeD"), 0, TEXT("./Parameters.ini"));
    lineInstallCycle[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineInstallCycleTypeE"), 0, TEXT("./Parameters.ini"));
    lineProducingCycle[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineProducingCycleTypeA"), 0, TEXT("./Parameters.ini"));
    lineProducingCycle[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineProducingCycleTypeB"), 0, TEXT("./Parameters.ini"));
    lineProducingCycle[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineProducingCycleTypeC"), 0, TEXT("./Parameters.ini"));
    lineProducingCycle[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineProducingCycleTypeD"), 0, TEXT("./Parameters.ini"));
    lineProducingCycle[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineProducingCycleTypeE"), 0, TEXT("./Parameters.ini"));
    lineConvertingCost[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCostTypeA"), 0, TEXT("./Parameters.ini"));
    lineConvertingCost[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCostTypeB"), 0, TEXT("./Parameters.ini"));
    lineConvertingCost[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCostTypeC"), 0, TEXT("./Parameters.ini"));
    lineConvertingCost[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCostTypeD"), 0, TEXT("./Parameters.ini"));
    lineConvertingCost[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCostTypeE"), 0, TEXT("./Parameters.ini"));
    lineConvertingCycle[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCycleTypeA"), 0, TEXT("./Parameters.ini"));
    lineConvertingCycle[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCycleTypeB"), 0, TEXT("./Parameters.ini"));
    lineConvertingCycle[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCycleTypeC"), 0, TEXT("./Parameters.ini"));
    lineConvertingCycle[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCycleTypeD"), 0, TEXT("./Parameters.ini"));
    lineConvertingCycle[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineConvertingCycleTypeE"), 0, TEXT("./Parameters.ini"));
    lineAnnualMaintainCost[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineAnnualMaintainCostTypeA"), 0, TEXT("./Parameters.ini"));
    lineAnnualMaintainCost[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineAnnualMaintainCostTypeB"), 0, TEXT("./Parameters.ini"));
    lineAnnualMaintainCost[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineAnnualMaintainCostTypeC"), 0, TEXT("./Parameters.ini"));
    lineAnnualMaintainCost[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineAnnualMaintainCostTypeD"), 0, TEXT("./Parameters.ini"));
    lineAnnualMaintainCost[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineAnnualMaintainCostTypeE"), 0, TEXT("./Parameters.ini"));
    lineOriginalValue[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineOriginalValueTypeA"), 0, TEXT("./Parameters.ini"));
    lineOriginalValue[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineOriginalValueTypeB"), 0, TEXT("./Parameters.ini"));
    lineOriginalValue[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineOriginalValueTypeC"), 0, TEXT("./Parameters.ini"));
    lineOriginalValue[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineOriginalValueTypeD"), 0, TEXT("./Parameters.ini"));
    lineOriginalValue[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("lineOriginalValueTypeE"), 0, TEXT("./Parameters.ini"));
    for (int i = 0; i < 100; i++)
    {
        line.own[i] = false;
        line.lineType[i] = -1;
        line.productSeasonLast[i] = 0;
        line.productType[i] = -1;
        line.convertingSeasonLast[i] = 0;
        line.installSeasonLast[i] = 0;
        line.seasonRented[i] = -1;
    }
    int lCt = 0;
    int lCtMax = 0;
    for (int i = 0; i < pCt; i++)
    {
        lineMaximumU += largePlantLineMaximum;
        if (plant.isLarge[i])
            lCtMax += largePlantLineMaximum;
        else
            lCtMax += smallPlantLineMaximum;
    }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("lineTypeAOwn"), 0, TEXT("./Parameters.ini"));
    buff += lCt;
    if (buff != 0)
        for (int i = lCt; i < buff; i++)
        {
            if (lCt >= lCtMax)
                break;
            lCt++;
            line.own[i] = true;
            line.lineType[i] = LINETYPE_MANUAL;
            line.seasonRented[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("lineTypeBOwn"), 0, TEXT("./Parameters.ini"));
    buff += lCt;
    if (buff != 0)
        for (int i = lCt; i < buff; i++)
        {
            if (lCt >= lCtMax)
                break;
            lCt++;
            line.own[i] = true;
            line.lineType[i] = LINETYPE_SEMIAUTOMATIC;
            line.seasonRented[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("lineTypeCOwn"), 0, TEXT("./Parameters.ini"));
    buff += lCt;
    if (buff != 0)
        for (int i = lCt; i < buff; i++)
        {
            if (lCt >= lCtMax)
                break;
            lCt++;
            line.own[i] = true;
            line.lineType[i] = LINETYPE_FULLAUTOMATIC;
            line.seasonRented[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("lineTypeDOwn"), 0, TEXT("./Parameters.ini"));
    buff += lCt;
    if (buff != 0)
        for (int i = lCt; i < buff; i++)
        {
            if (lCt >= lCtMax)
                break;
            lCt++;
            line.own[i] = true;
            line.lineType[i] = LINETYPE_FLEXIBLE;
            line.seasonRented[i] = 0;
        }
    buff = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("lineTypeEOwn"), 0, TEXT("./Parameters.ini"));
    buff += lCt;
    if (buff != 0)
        for (int i = lCt; i < buff; i++)
        {
            if (lCt >= lCtMax)
                break;
            lCt++;
            line.own[i] = true;
            line.lineType[i] = LINETYPE_RENTED;
        }
    productDevelopment[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopmentCycle1"), 0, TEXT("./Parameters.ini"));
    productDevelopment[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopmentCycle2"), 0, TEXT("./Parameters.ini"));
    productDevelopment[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopmentCycle3"), 0, TEXT("./Parameters.ini"));
    productDevelopment[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopmentCycle4"), 0, TEXT("./Parameters.ini"));
    productDevelopingCostE[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopingCostE1"), 0, TEXT("./Parameters.ini"));
    productDevelopingCostE[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopingCostE2"), 0, TEXT("./Parameters.ini"));
    productDevelopingCostE[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopingCostE3"), 0, TEXT("./Parameters.ini"));
    productDevelopingCostE[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productDevelopingCostE4"), 0, TEXT("./Parameters.ini"));
    marketDevelopment[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopmentCycle1"), 0, TEXT("./Parameters.ini"));
    marketDevelopment[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopmentCycle2"), 0, TEXT("./Parameters.ini"));
    marketDevelopment[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopmentCycle3"), 0, TEXT("./Parameters.ini"));
    marketDevelopment[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopmentCycle4"), 0, TEXT("./Parameters.ini"));
    marketDevelopment[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopmentCycle5"), 0, TEXT("./Parameters.ini"));
    marketDevelopingCostE[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopingCostE1"), 0, TEXT("./Parameters.ini"));
    marketDevelopingCostE[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopingCostE2"), 0, TEXT("./Parameters.ini"));
    marketDevelopingCostE[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopingCostE3"), 0, TEXT("./Parameters.ini"));
    marketDevelopingCostE[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopingCostE4"), 0, TEXT("./Parameters.ini"));
    marketDevelopingCostE[4] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("marketDevelopingCostE5"), 0, TEXT("./Parameters.ini"));
    ISOt[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("ISOCycle1"), 0, TEXT("./Parameters.ini"));
    ISOt[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("ISOCycle2"), 0, TEXT("./Parameters.ini"));
    ISOcE[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("ISOcostE1"), 0, TEXT("./Parameters.ini"));
    ISOcE[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("ISOcostE2"), 0, TEXT("./Parameters.ini"));
    materialNum[0] = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialMaterial1"), 0, TEXT("./Parameters.ini"));
    materialNum[1] = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialMaterial2"), 0, TEXT("./Parameters.ini"));
    materialNum[2] = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialMaterial3"), 0, TEXT("./Parameters.ini"));
    materialNum[3] = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialMaterial4"), 0, TEXT("./Parameters.ini"));
    mtrCost[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("materialCost1"), 0, TEXT("./Parameters.ini"));
    mtrCost[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("materialCost2"), 0, TEXT("./Parameters.ini"));
    mtrCost[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("materialCost3"), 0, TEXT("./Parameters.ini"));
    mtrCost[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("materialCost4"), 0, TEXT("./Parameters.ini"));
    productNeeds[0][0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product1_Material1Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[0][1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product1_Material2Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[0][2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product1_Material3Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[0][3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product1_Material4Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[1][0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product2_Material1Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[1][1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product2_Material2Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[1][2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product2_Material3Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[1][3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product2_Material4Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[2][0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product3_Material1Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[2][1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product3_Material2Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[2][2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product3_Material3Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[2][3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product3_Material4Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[3][0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product4_Material1Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[3][1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product4_Material2Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[3][2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product4_Material3Needed"), 0, TEXT("./Parameters.ini"));
    productNeeds[3][3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("product4_Material4Needed"), 0, TEXT("./Parameters.ini"));
    productProcessingCost[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProcessingCost1"), 0, TEXT("./Parameters.ini"));
    productProcessingCost[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProcessingCost2"), 0, TEXT("./Parameters.ini"));
    productProcessingCost[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProcessingCost3"), 0, TEXT("./Parameters.ini"));
    productProcessingCost[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProcessingCost4"), 0, TEXT("./Parameters.ini"));
    productTransportingTime[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productTransportingTime1"), 0, TEXT("./Parameters.ini"));
    productTransportingTime[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productTransportingTime2"), 0, TEXT("./Parameters.ini"));
    productTransportingTime[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productTransportingTime3"), 0, TEXT("./Parameters.ini"));
    productTransportingTime[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productTransportingTime4"), 0, TEXT("./Parameters.ini"));
    productProducingTime[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProducingTime1"), 0, TEXT("./Parameters.ini"));
    productProducingTime[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProducingTime2"), 0, TEXT("./Parameters.ini"));
    productProducingTime[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProducingTime3"), 0, TEXT("./Parameters.ini"));
    productProducingTime[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productProducingTime4"), 0, TEXT("./Parameters.ini"));
    productOutPrice[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productOutPrice1"), 0, TEXT("./Parameters.ini"));
    productOutPrice[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productOutPrice2"), 0, TEXT("./Parameters.ini"));
    productOutPrice[2] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productOutPrice3"), 0, TEXT("./Parameters.ini"));
    productOutPrice[3] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("productOutPrice4"), 0, TEXT("./Parameters.ini"));
    penaltyRateN[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("penaltyRateN1"), 0, TEXT("./Parameters.ini"));
    penaltyRateN[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("penaltyRateN2"), 0, TEXT("./Parameters.ini"));
    penaltyRateU[0] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("penaltyRateU1"), 0, TEXT("./Parameters.ini"));
    penaltyRateU[1] = GetPrivateProfileIntW(TEXT("Parameters"), TEXT("penaltyRateU2"), 0, TEXT("./Parameters.ini"));
    receivableIni = GetPrivateProfileIntW(TEXT("Initialization"), TEXT("initialReceivable"), 0, TEXT("./Parameters.ini"));
    loanLimit = 40 + receivableIni;
    loan.moneyR[0] = receivableIni;
    loan.moneyT[0] = receivableIni;
    if (!InitInstance (hInstance, nCmdShow))
        return FALSE;
    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY));
    while (GetMessage(&msg, nullptr, 0, 0))
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    return (int) msg.wParam;
}
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW-3);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_MY);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));
    return RegisterClassExW(&wcex);
}
ATOM MyRegisterClassBtn(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW | CS_NOCLOSE | CS_PARENTDC;
    wcex.lpfnWndProc = Btn;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = NULL;
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szWindowClassBtn;
    wcex.hIconSm = NULL;
    return RegisterClassExW(&wcex);
}
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance;
   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW & (~WS_MAXIMIZEBOX) ^ WS_THICKFRAME | WS_BORDER,
       (sysX - WNDX) / 2, (sysY - WNDY) / 2, WNDX, WNDY, nullptr, nullptr, hInstance, nullptr);
   if (!hWnd)
      return FALSE;
   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);
   return TRUE;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    int m = message - WM_USER - 100;
    if (m >= 100 && m < 100 + plantMaximum)
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C1C_C = new HWND[largePlantLineMaximum];
        bufPtr = hWndG3C1C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 10);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        for (int i = (m - 100) * largePlantLineMaximum, j = 0; i < (m - 100) * largePlantLineMaximum + (plant.isLarge[m - 100] ? largePlantLineMaximum : smallPlantLineMaximum); i++)
        {
            if (line.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("购买为生产线#"));
            wsprintfW(str2, TEXT("%d"), (i - (m - 100) * largePlantLineMaximum + 1));
            wcscat(str1, str2);
            hWndG3C1C_C[i - (m - 100) * largePlantLineMaximum] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 2 * lineMaximumU + i), hInst, 0);
            j++;
        }
        HWND hWndG3C1CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        //delete[]hWndG3C1C_C;
        return 0;
    }
    else if (m >= 100 + plantMaximum && m < 100 + 2 * plantMaximum)
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C2C_C = new HWND[largePlantLineMaximum];
        bufPtr = hWndG3C2C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 10);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        for (int i = (m - 100 - plantMaximum) * largePlantLineMaximum, j = 0; i < (m - 100 - plantMaximum) * largePlantLineMaximum + (plant.isLarge[m - 100 - plantMaximum] ? largePlantLineMaximum : smallPlantLineMaximum); i++)
        {
            if (line.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("租用为生产线#"));
            wsprintfW(str2, TEXT("%d"), (i - (m - 100 - plantMaximum) * largePlantLineMaximum + 1));
            wcscat(str1, str2);
            hWndG3C2C_C[i - (m - 100 - plantMaximum) * largePlantLineMaximum] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 3 * lineMaximumU + i), hInst, NULL);
            j++;
        }
        HWND hWndG3C2CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C2C_C;
        return 0;
    }
    else if (m >= 100 + 2 * plantMaximum && m < 100 + 3 * plantMaximum)
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C3C_C = new HWND[largePlantLineMaximum];
        bufPtr = hWndG3C3C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 9);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        for (int i = (m - 100 - 2 * plantMaximum) * largePlantLineMaximum, j = 0; i < (m - 100 - 2 * plantMaximum) * largePlantLineMaximum + (plant.isLarge[m - 100 - 2 * plantMaximum] ? largePlantLineMaximum : smallPlantLineMaximum); i++)
        {
            if (!line.own[i] || line.lineType[i] == LINETYPE_RENTED || line.convertingSeasonLast[i] != 0 || line.installSeasonLast[i] != 0 || line.productSeasonLast[i] != 0)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("变卖生产线#"));
            wsprintfW(str2, TEXT("%d"), (i - (m - 100 - 2 * plantMaximum) * largePlantLineMaximum + 1));
            wcscat(str1, str2);
            hWndG3C3C_C[i - (m - 100 - 2 * plantMaximum) * largePlantLineMaximum] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 4 * lineMaximumU + i), hInst, NULL);
            j++;
        }
        HWND hWndG3C3CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C3C_C;
        return 0;
    }
    else if (m >= 100 + 3 * plantMaximum && m < 100 + 4 * plantMaximum)
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C4C_C = new HWND[largePlantLineMaximum];
        bufPtr = hWndG3C4C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 9);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        for (int i = (m - 100 - 3 * plantMaximum) * largePlantLineMaximum, j = 0; i < (m - 100 - 3 * plantMaximum) * largePlantLineMaximum + (plant.isLarge[m - 100 - 3 * plantMaximum] ? largePlantLineMaximum : smallPlantLineMaximum); i++)
        {
            if (!line.own[i] || line.lineType[i] != LINETYPE_RENTED || line.convertingSeasonLast[i] != 0 || line.installSeasonLast[i] != 0 || line.productSeasonLast[i] != 0)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("停租生产线#"));
            wsprintfW(str2, TEXT("%d"), (i - (m - 100 - 3 * plantMaximum) * largePlantLineMaximum + 1));
            wcscat(str1, str2);
            hWndG3C4C_C[i - (m - 100 - 3 * plantMaximum) * largePlantLineMaximum] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 5 * lineMaximumU + i), hInst, NULL);
            j++;
        }
        HWND hWndG3C4CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C4C_C;
        return 0;
    }
    else if (m >= 100 + 4 * plantMaximum && m < 100 + 5 * plantMaximum)
    {
        messageBuffer = message;
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG9C_C = new HWND[plant.isLarge[message - (int)WM_USER - 200 - 4 * plantMaximum] ? largePlantLineMaximum : smallPlantLineMaximum];
        bufPtr = hWndG9C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        for (int i = (m - (100 + 4 * plantMaximum))*largePlantLineMaximum; i < (m - (100 + 4 * plantMaximum)) * largePlantLineMaximum + (plant.isLarge[m - (100 + 4 * plantMaximum)]?largePlantLineMaximum:smallPlantLineMaximum); i++)
        {
            if (!line.own[i] || line.convertingSeasonLast[i] > 0 || line.productSeasonLast[i] > 0 || line.installSeasonLast[i] > 0 || line.productType[i] == PRODUCTTYPE_NONE)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("在生产线 "));
            wsprintfW(str2, TEXT("%d"), (i - (m - (100 + 4 * plantMaximum))* largePlantLineMaximum + 1));
            if (line.lineType[i] == LINETYPE_MANUAL)
                wsprintfW(str3, TEXT("%s"), TEXT("（手工）"));
            else if (line.lineType[i] == LINETYPE_SEMIAUTOMATIC)
                wsprintfW(str3, TEXT("%s"), TEXT("（半自动）"));
            else if (line.lineType[i] == LINETYPE_FULLAUTOMATIC)
                wsprintfW(str3, TEXT("%s"), TEXT("（自动）"));
            else if (line.lineType[i] == LINETYPE_FLEXIBLE)
                wsprintfW(str3, TEXT("%s"), TEXT("（柔性）"));
            else if (line.lineType[i] == LINETYPE_RENTED)
                wsprintfW(str3, TEXT("%s"), TEXT("（租赁）"));
            wsprintfW(str4, TEXT("%s"), TEXT(" 上生产"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            hWndG9C_C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 34, 240, 26, hWnd, (HMENU)(100 + i + 6 * plantMaximum + lineMaximumU), hInst, NULL);
        }
        HWND hWndG9C_CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG9C_C;
        return 0;
    }
    else if (m >= 100 + 5 * plantMaximum && m < 100 + 6 * plantMaximum)
    {
        messageBuffer = message;
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG9C_C = new HWND[plant.isLarge[message - (int)WM_USER - 200 - 5 * plantMaximum] ? largePlantLineMaximum : smallPlantLineMaximum];
        bufPtr = hWndG9C_C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        for (int i = (m - (100 + 5 * plantMaximum)) * largePlantLineMaximum; i < (m - (100 + 5 * plantMaximum)) * largePlantLineMaximum + (plant.isLarge[m - (100 + 5 * plantMaximum)] ? largePlantLineMaximum : smallPlantLineMaximum); i++)
        {
            if (!line.own[i] || line.convertingSeasonLast[i] > 0 || line.productSeasonLast[i] > 0 || line.installSeasonLast[i] > 0)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("将生产线 "));
            wsprintfW(str2, TEXT("%d"), (i - (m - (100 + 5 * plantMaximum)) * largePlantLineMaximum + 1));
            if (line.lineType[i] == LINETYPE_MANUAL)
                wsprintfW(str3, TEXT("%s"), TEXT("（手工）"));
            else if (line.lineType[i] == LINETYPE_SEMIAUTOMATIC)
                wsprintfW(str3, TEXT("%s"), TEXT("（半自动）"));
            else if (line.lineType[i] == LINETYPE_FULLAUTOMATIC)
                wsprintfW(str3, TEXT("%s"), TEXT("（自动）"));
            else if (line.lineType[i] == LINETYPE_FLEXIBLE)
                wsprintfW(str3, TEXT("%s"), TEXT("（柔性）"));
            else if (line.lineType[i] == LINETYPE_RENTED)
                wsprintfW(str3, TEXT("%s"), TEXT("（租赁）"));
            wsprintfW(str4, TEXT("%s"), TEXT(" 转产"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            hWndG9C_C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 34, 240, 26, hWnd, (HMENU)(100 + i + 6 * plantMaximum), hInst, NULL);
        }
        HWND hWndG9C_CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG9C_C;
        return 0; 
    }
    else if (m >= 100 + 6 * plantMaximum && m < 100 + 6 * plantMaximum + lineMaximumU)
    {
        messageBuffer = message;
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        if (LOWORD(wParam) != 0)
        {
            line.productType[m - (100 + 6 * plantMaximum)] = (int)LOWORD(wParam)-1;
            line.convertingSeasonLast[m - (100 + 6 * plantMaximum)] = lineConvertingCycle[line.lineType[m - (100 + 6 * plantMaximum)]];
            sum -= lineConvertingCost[(int)LOWORD(wParam)-1];
            SendMessageW(hWnd, MSG_GAME, NULL, NULL);
            return 0;
        }
        HWND hWndG9C_C_C1 = CreateWindowW(szWindowClassBtn, TEXT("Ⅰ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 200, 240, 26, hWnd, BTN_PRD1, hInst, NULL);
        HWND hWndG9C_C_C2 = CreateWindowW(szWindowClassBtn, TEXT("Ⅱ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 240, 240, 26, hWnd, BTN_PRD2, hInst, NULL);
        HWND hWndG9C_C_C3 = CreateWindowW(szWindowClassBtn, TEXT("Ⅲ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 280, 240, 26, hWnd, BTN_PRD3, hInst, NULL);
        HWND hWndG9C_C_C4 = CreateWindowW(szWindowClassBtn, TEXT("Ⅳ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 320, 240, 26, hWnd, BTN_PRD4, hInst, NULL);
        HWND hWndG9C_C_CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    else if (m >= 100 + 6 * plantMaximum + lineMaximumU && m < 100 + 6 * plantMaximum + 2 * lineMaximumU)
    {
        messageBuffer = message;
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        line.productSeasonLast[m - (100 + 6 * plantMaximum + lineMaximumU)] = productProducingTime[line.productType[m - (100 + 6 * plantMaximum + lineMaximumU)]];
        for(int k = 0; k < 4; k++)
            materialNum[k] -= productNeeds[line.productType[m - (100 + 6 * plantMaximum + lineMaximumU)]][k];
        SendMessageW(hWnd, MSG_GAME, NULL, NULL);
        return 0;
    }
    else if (m == 100 + 6 * plantMaximum + 2 * lineMaximumU)
    {
        messageBuffer = LOWORD(wParam);
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND hWndG3C1C_C_C1 = CreateWindowW(szWindowClassBtn, TEXT("手工线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 200, 120, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 6 * lineMaximumU + 0), hInst, NULL);
        HWND hWndG3C1C_C_C2 = CreateWindowW(szWindowClassBtn, TEXT("半自动线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 240, 120, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 6 * lineMaximumU + 1), hInst, NULL);
        HWND hWndG3C1C_C_C3 = CreateWindowW(szWindowClassBtn, TEXT("自动线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 280, 120, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 6 * lineMaximumU + 2), hInst, NULL);
        HWND hWndG3C1C_C_C4 = CreateWindowW(szWindowClassBtn, TEXT("柔性线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 320, 120, 26, hWnd, (HMENU)(100 + 12 * plantMaximum + 6 * lineMaximumU + 3), hInst, NULL);
    }
    switch (message)
    {
    case MSG_FAIL:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
        GetWindowRect(hWnd, rct);
        rct->right = rct->right - rct->left;
        rct->left = 0;
        rct->bottom = rct->bottom - rct->top;
        rct->top = 0;
        DrawTextW(hdc, TEXT("你破产了"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->top += 40;
        rct->bottom += 40;
        if(sum <= 0)
            DrawTextW(hdc, TEXT("原因：资金"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        else
            DrawTextW(hdc, TEXT("原因：信用"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        EndPaint(hWnd, &ps);
        HWND hWndGF = CreateWindowW(szWindowClassBtn, TEXT("继续"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_SUMUP, hInst, NULL);
        inGame = false;
    }
    case WM_SHOWWINDOW:
        DestroyAllChildWindow(hWnd, NULL);
    break;
    case WM_CREATE:
    {
        if (access("./Parameters.ini", 0))
        {
            DialogBoxW(hInst, MAKEINTRESOURCE(IDD_ININOTEXISTBOX), hWnd, IniNotExist);
            PostQuitMessage(0);
        }
    }
    break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // 分析菜单选择:
            switch (wmId)
            {
            case IDM_CONTRIBUTER:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_CONTRIBUTERBOX), hWnd, Contributer);
                break;
            case IDM_EXIT:
                delete[]bufPtr;
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_LBUTTONDOWN:
        {
            if (!inGame)
            {
                inGame = true;
                SendMessageW(hWnd, MSG_GAME, NULL, NULL);
            }
        }
    break;
    case MSG_SUMUP:
    {
        static int y;
        double score = 0;
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        if (LOWORD(wParam) == NULL)
            y = 10;
        else if (LOWORD(wParam) == 1)
            y += 60;
        else if (LOWORD(wParam) == 2)
            y -= 60;
        if (y > 10)
            y = 10;
        if (y < 410 - CalculateShowingArea(y))
            y = 410 - CalculateShowingArea(y);
        int c = y;
        score += sum;
        for (int i = 0, n = 0; i < loanNum; i++)
        {
            if (!loan.notLoan)
                score += loan.moneyR[i];
        }
        int b = 0;
        for (int i = 0; i < plantMaximum; i++)
        {
            if (plant.own[i] && !plant.isRented[i])
                b += (plant.isLarge[i] ? 15 : 10);
        }
        for (int i = 0; i < lineMaximumU; i++)
        {
            if (line.own[i])
                b += ((line.lineType[i] == 0) ? 5 : ((line.lineType[i] == 1) ? 10 : (((line.lineType[i] == 2) || (line.lineType[i] == 3)) ? 5 : 0)));
        }
        if (marketDevelopment[1])
            b += 10;
        if (marketDevelopment[2])
            b += 15;
        if (marketDevelopment[3])
            b += 20;
        if (marketDevelopment[4])
            b += 25;
        if (ISOt[0] == 0)
            b += 10;
        if (ISOt[1] == 0)
            b += 10;
        if (productDevelopment[1])
            b += 10;
        if (productDevelopment[2])
            b += 10;
        if (productDevelopment[3])
            b += 15;
        score *= (double)((double)1 + ((double)b / (double)100)) * (double)percentageOfOthersInScore / (double)100;
        score += (double)(((double)credit / (double)5) * (double)100) * (double)percentageOfCreditInScore / (double)100;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 10);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 10);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        TextOutW(hdc, 10, y, TEXT("第"), wcslen(TEXT("第")));
        wsprintfW(str1, TEXT("%d"), year);
        TextOutW(hdc, 28, y, str1, wcslen(str1));
        TextOutW(hdc, 40, y, TEXT("年"), wcslen(TEXT("年")));
        TextOutW(hdc, 66, y, TEXT("第"), wcslen(TEXT("第")));
        wsprintfW(str2, TEXT("%d"), season);
        TextOutW(hdc, 84, y, str2, wcslen(str2));
        TextOutW(hdc, 96, y, TEXT("季度"), wcslen(TEXT("季度")));
        y += 20;
        wsprintfW(str1, TEXT("%s"), TEXT("得分："));
        wsprintfW(str2, TEXT("%d"), (int)score);
        TextOutW(hdc, 10, y, str1, wcslen(str1));
        TextOutW(hdc, 50, y, str2, wcslen(str2));
        y += 20;
        wsprintfW(str1, TEXT("%s"), TEXT("现金："));
        wsprintfW(str2, TEXT("%d"), (int)sum);
        TextOutW(hdc, 10, y, str1, wcslen(str1));
        TextOutW(hdc, 50, y, str2, wcslen(str2));
        y += 20;
        wsprintfW(str1, TEXT("%s"), TEXT("信用： ."));
        wsprintfW(str2, TEXT("%d"), (int)(10 * credit));
        TextOutW(hdc, 10, y, str1, wcslen(str1));
        TextOutW(hdc, 53, y, str2, wcslen(str2));
        y += 20;
        TextOutW(hdc, 10, y, TEXT("厂房："), wcslen(TEXT("厂房：")));
        y += 20;
        for (int i = 0; i < plantMaximum; i++)
        {
            wsprintfW(str1, TEXT("%d."), i + 1);
            if (!plant.own[i])
            {
                wsprintfW(str2, TEXT("%s"), TEXT("：无"));
                y += 20;
            }
            else
            {
                if (plant.isLarge[i] && plant.isRented[i])
                    wsprintfW(str2, TEXT("%s"), TEXT("：租用    大"));
                else if (!plant.isLarge[i] && plant.isRented[i])
                    wsprintfW(str2, TEXT("%s"), TEXT("租用    小"));
                else if (plant.isLarge[i] && !plant.isRented[i])
                    wsprintfW(str2, TEXT("%s"), TEXT("非租用  大"));
                else if (!plant.isLarge[i] && !plant.isRented[i])
                    wsprintfW(str2, TEXT("%s"), TEXT("非租用  小"));
                TextOutW(hdc, 10, y, str1, wcslen(str1));
                TextOutW(hdc, 50, y, str2, wcslen(str2));
                y += 20;
                if (plant.isRented[i])
                {
                    TextOutW(hdc, 50, y, TEXT("租赁时季度:"), wcslen(TEXT("租赁时季度:")));
                    wsprintfW(str1, TEXT("%d"), plant.seasonRenteNum[i]);
                    TextOutW(hdc, 136, y, str1, wcslen(str1));
                    y += 20;
                }
            }
            if (plant.own[i])
            {
                TextOutW(hdc, 50, y, TEXT("生产线："), wcslen(TEXT("生产线：")));
                y += 20;
                for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + (plant.isLarge[i] ? largePlantLineMaximum : smallPlantLineMaximum); j++)
                {
                    wsprintfW(str1, TEXT("%d."), j + 1 - i * largePlantLineMaximum);
                    TextOutW(hdc, 90, y, str1, wcslen(str1));
                    if (!line.own[j])
                    {
                        TextOutW(hdc, 120, y, TEXT("无"), wcslen(TEXT("无")));
                        y += 20;
                    }
                    else
                    {
                        if (line.lineType[j] == 0)
                            TextOutW(hdc, 120, y, TEXT("手工线"), wcslen(TEXT("手工线")));
                        else if (line.lineType[j] == 1)
                            TextOutW(hdc, 120, y, TEXT("半自动线"), wcslen(TEXT("半自动线")));
                        else if (line.lineType[j] == 2)
                            TextOutW(hdc, 120, y, TEXT("自动线"), wcslen(TEXT("自动线")));
                        else if (line.lineType[j] == 3)
                            TextOutW(hdc, 120, y, TEXT("柔性线"), wcslen(TEXT("柔性线")));
                        else if (line.lineType[j] == 4)
                            TextOutW(hdc, 120, y, TEXT("租赁线"), wcslen(TEXT("租赁线")));
                        if (line.productType[j] != -1)
                        {
                            wsprintfW(str1, TEXT("%d"), line.productType[j] + 1);
                            TextOutW(hdc, 206, y, str1, wcslen(str1));
                            TextOutW(hdc, 220, y, TEXT("型产品生产线"), wcslen(TEXT("型产品生产线")));
                        }
                        else
                            TextOutW(hdc, 206, y, TEXT("未初始化"), wcslen(TEXT("未初始化")));
                        y += 20;
                        if (line.installSeasonLast[j] > 0)
                        {
                            wsprintfW(str1, TEXT("%d"), line.installSeasonLast[j]);
                            TextOutW(hdc, 120, y, str1, wcslen(str1));
                            TextOutW(hdc, 134, y, TEXT("季度后完成安装"), wcslen(TEXT("季度后完成安装")));
                            y += 20;
                        }
                        else if (line.convertingSeasonLast[j] > 0)
                        {
                            wsprintfW(str1, TEXT("%d"), line.convertingSeasonLast[j]);
                            TextOutW(hdc, 120, y, str1, wcslen(str1));
                            TextOutW(hdc, 134, y, TEXT("季度后转产为"), wcslen(TEXT("季度后转产为")));
                            wsprintfW(str1, TEXT("%d"), line.productType[j] + 1);
                            TextOutW(hdc, 236, y, str1, wcslen(str1));
                            TextOutW(hdc, 250, y, TEXT("型产品生产线"), wcslen(TEXT("型产品生产线")));
                            y += 20;
                        }
                        else if (line.productSeasonLast[j] > 0)
                        {
                            wsprintfW(str1, TEXT("%d"), line.productSeasonLast[j]);
                            TextOutW(hdc, 120, y, str1, wcslen(str1));
                            TextOutW(hdc, 134, y, TEXT("季度后产出"), wcslen(TEXT("季度后产出")));
                            wsprintfW(str1, TEXT("%d"), line.productType[j] + 1);
                            TextOutW(hdc, 236, y, str1, wcslen(str1));
                            TextOutW(hdc, 250, y, TEXT("型产品"), wcslen(TEXT("型产品")));
                            y += 20;
                        }
                        if (line.seasonRented[j] >= 0)
                        {
                            TextOutW(hdc, 120, y, TEXT("已拥有"), wcslen(TEXT("已拥有")));
                            wsprintfW(str1, TEXT("%d"), line.seasonRented[j]);
                            TextOutW(hdc, 206, y, str1, wcslen(str1));
                            TextOutW(hdc, 220, y, TEXT("个季度"), wcslen(TEXT("个季度")));
                            y += 20;
                        }
                    }
                }
            }
        }
        y -= 40;
        TextOutW(hdc, 10, y, TEXT("ISO9000"), wcslen(TEXT("ISO9000")));
        if (ISOt[0] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开发"), wcslen(TEXT("已完成开发")));
        else
        {
            wsprintfW(str1, TEXT("%d"), ISOt[0]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开发"), wcslen(TEXT("次开发")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("ISO14000"), wcslen(TEXT("ISO14000")));
        if (ISOt[1] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开发"), wcslen(TEXT("已完成开发")));
        else {
            wsprintfW(str1, TEXT("%d"), ISOt[1]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开发"), wcslen(TEXT("次开发")));
        }
        y += 20;
        for (int i = 0; i < 4; i++)
        {
            wsprintfW(str1, TEXT("%d"), i);
            TextOutW(hdc, 10, y, str1, wcslen(str1));
            TextOutW(hdc, 18, y, TEXT("型产品"), wcslen(TEXT("型产品")));
            if (productDevelopment[i] == 0)
                TextOutW(hdc, 94, y, TEXT("已完成研发"), wcslen(TEXT("已完成研发")));
            else {
                wsprintfW(str1, TEXT("%d"), productDevelopment[i]);
                TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
                TextOutW(hdc, 130, y, str1, wcslen(str1));
                TextOutW(hdc, 144, y, TEXT("次研发"), wcslen(TEXT("次研发")));
            }
            y += 20;
        }
        TextOutW(hdc, 10, y, TEXT("本地市场"), wcslen(TEXT("本地市场")));
        if (marketDevelopment[0] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开拓"), wcslen(TEXT("已完成开拓")));
        else {
            wsprintfW(str1, TEXT("%d"), marketDevelopment[0]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开拓"), wcslen(TEXT("次开拓")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("区域市场"), wcslen(TEXT("区域市场")));
        if (marketDevelopment[1] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开拓"), wcslen(TEXT("已完成开拓")));
        else {
            wsprintfW(str1, TEXT("%d"), marketDevelopment[1]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开拓"), wcslen(TEXT("次开拓")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("国内市场"), wcslen(TEXT("国内市场")));
        if (marketDevelopment[2] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开拓"), wcslen(TEXT("已完成开拓")));
        else {
            wsprintfW(str1, TEXT("%d"), marketDevelopment[2]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开拓"), wcslen(TEXT("次开拓")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("亚洲市场"), wcslen(TEXT("亚洲市场")));
        if (marketDevelopment[3] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开拓"), wcslen(TEXT("已完成开拓")));
        else {
            wsprintfW(str1, TEXT("%d"), marketDevelopment[3]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开拓"), wcslen(TEXT("次开拓")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("世界市场"), wcslen(TEXT("世界市场")));
        if (marketDevelopment[4] == 0)
            TextOutW(hdc, 94, y, TEXT("已完成开拓"), wcslen(TEXT("已完成开拓")));
        else {
            wsprintfW(str1, TEXT("%d"), marketDevelopment[4]);
            TextOutW(hdc, 94, y, TEXT("还需"), wcslen(TEXT("还需")));
            TextOutW(hdc, 130, y, str1, wcslen(str1));
            TextOutW(hdc, 144, y, TEXT("次开拓"), wcslen(TEXT("次开拓")));
        }
        y += 20;
        TextOutW(hdc, 10, y, TEXT("应收款与负债："), wcslen(TEXT("应收款与负债：")));
        y += 20;

        for (int i = 0; i < loanNum; i++)
        {
            wsprintfW(str1, TEXT("%d."), i + 1);
            TextOutW(hdc, 10, y, str1, wcslen(str1));
            if (loan.notLoan[i])
            {
                wsprintfW(str1, TEXT("%d"), loan.seasonR[i]);
                TextOutW(hdc, 50, y, str1, wcslen(str1));
                TextOutW(hdc, 64, y, TEXT("季度后应收款"), wcslen(TEXT("季度后应收款")));
                wsprintfW(str1, TEXT("%d"), loan.moneyT[i]);
                TextOutW(hdc, 200, y, str1, wcslen(str1));
                TextOutW(hdc, 220, y, TEXT("万元"), wcslen(TEXT("万元")));
            }
            else
            {
                if (loan.isLong[i])
                {
                    wsprintfW(str1, TEXT("%d"), loan.yearT[i]);
                    TextOutW(hdc, 50, y, str1, wcslen(str1));
                    TextOutW(hdc, 64, y, TEXT("年应偿还长期贷款"), wcslen(TEXT("年应偿还长期贷款")));
                    wsprintfW(str1, TEXT("%d"), 0 - loan.moneyT[i]);
                    TextOutW(hdc, 200, y, str1, wcslen(str1));
                    TextOutW(hdc, 220, y, TEXT("万元，已偿还"), wcslen(TEXT("万元，已偿还")));
                    wsprintfW(str1, TEXT("%d"), loan.moneyT[i] - loan.moneyR[i]);
                    TextOutW(hdc, 310, y, str1, wcslen(str1));
                    TextOutW(hdc, 330, y, TEXT("万元，将在"), wcslen(TEXT("万元，将在")));
                    wsprintfW(str1, TEXT("%d"), loan.seasonR[i]);
                    TextOutW(hdc, 420, y, str1, wcslen(str1));
                    TextOutW(hdc, 440, y, TEXT("季度内还清"), wcslen(TEXT("季度内还清")));
                }
                else
                {
                    wsprintfW(str1, TEXT("%d"), loan.seasonR[i]);
                    TextOutW(hdc, 50, y, str1, wcslen(str1));
                    TextOutW(hdc, 64, y, TEXT("季度后还款"), wcslen(TEXT("季度后还款")));
                    wsprintfW(str1, TEXT("%d"), 0 - loan.moneyT[i]);
                    TextOutW(hdc, 168, y, str1, wcslen(str1));
                    TextOutW(hdc, 188, y, TEXT("万元"), wcslen(TEXT("万元")));
                }
            }
            y += 20;
        }
        TextOutW(hdc, 10, y, TEXT("订单："), wcslen(TEXT("订单：")));
        y += 20;
        for (int i = 0; order.time[i] == 0 && i < 11; i++)
        {
            if(i == 10)
            {
                TextOutW(hdc, 10, y, TEXT("无"), wcslen(TEXT("无")));
                EndPaint(hWnd, &ps);
                if (inGame)
                    HWND hWndG11CCL = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                        680, 500, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
                HWND hWndG11U = CreateWindowW(szWindowClassBtn, TEXT("↑"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                    730, 450, 25, 25, hWnd, BTN_G11U, hInst, NULL);
                HWND hWndG11D = CreateWindowW(szWindowClassBtn, TEXT("↓"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                    730, 475, 25, 25, hWnd, BTN_G11D, hInst, NULL);
                y = c;
                return 0;
            }
        }
        for (int i = 0; order.time[i] != 0 && i < 10; i++)
        {
            wsprintfW(str1, TEXT("%d."), i + 1);
            if (order.urgent[i])
            {
                TextOutW(hdc, 50, y, TEXT("加急单"), wcslen(TEXT("加急单")));
            }
            else
                TextOutW(hdc, 50, y, TEXT("普通单"), wcslen(TEXT("普通单")));
            if (order.time[i] > 0)
            {
                TextOutW(hdc, 100, y, TEXT("未逾期"), wcslen(TEXT("未逾期")));
            }
            else
                TextOutW(hdc, 100, y, TEXT("已逾期（仍可交单）"), wcslen(TEXT("已逾期（仍可交单）")));
            y += 20;
            wsprintfW(str1, TEXT("%d 季度后结束"), order.time[i]);
            TextOutW(hdc, 50, y, str1, wcslen(str1));
            y += 20;
            for (int j = 0; j < 4; j++)
            {
                if (order.product[i][j] == 0)
                    continue;
                wsprintfW(str1, TEXT("%d"), j + 1);
                TextOutW(hdc, 50, y, str1, wcslen(str1));
                TextOutW(hdc, 58, y, TEXT("型产品"), wcslen(TEXT("型产品")));
                wsprintfW(str1, TEXT("%d"), order.product[i][j]);
                TextOutW(hdc, 108, y, str1, wcslen(str1));
                TextOutW(hdc, 122, y, TEXT("个"), wcslen(TEXT("个")));
                y += 20;
            }
            y += 20;
        }
        EndPaint(hWnd, &ps);
        if (inGame)
            HWND hWndG11CCL = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                680, 500, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        HWND hWndG11U = CreateWindowW(szWindowClassBtn, TEXT("↑"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            730, 450, 25, 25, hWnd, BTN_G11U, hInst, NULL);
        HWND hWndG11D = CreateWindowW(szWindowClassBtn, TEXT("↓"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            730, 475, 25, 25, hWnd, BTN_G11D, hInst, NULL);
        y = c;
    }
    break;
    case MSG_GAME:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        if (credit >= 4.5)
            HWND hWndG1 = CreateWindowW(szWindowClassBtn, TEXT("贷款"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200, 75, 26, hWnd, BTN_LOAN, hInst, NULL);
        if(credit >= 3.5)
            HWND hWndG2 = CreateWindowW(szWindowClassBtn, TEXT("厂房"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 240, 75, 26, hWnd, BTN_PLANT, hInst, NULL);
        HWND hWndG3 = CreateWindowW(szWindowClassBtn, TEXT("生产线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 280, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        int l = 0;
        for (; order.time[l] != 0 && l < 10; l++);
        if (season == 1 && l < 10)
        {
            HWND hWndG5 = CreateWindowW(szWindowClassBtn, TEXT("获取订单"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 320, 75, 26, hWnd, BTN_ORDR, hInst, NULL);
        }
        HWND hWndG6 = CreateWindowW(szWindowClassBtn, TEXT("产品研发"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            180, 200, 75, 26, hWnd, BTN_DVLP, hInst, NULL);
        HWND hWndG7 = CreateWindowW(szWindowClassBtn, TEXT("获取原料"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 360, 75, 26, hWnd, BTN_MTR, hInst, NULL);
        if (credit >= 3)
        {
            HWND hWndG8 = CreateWindowW(szWindowClassBtn, TEXT("市场开发"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                180, 240, 75, 26, hWnd, BTN_MKT, hInst, NULL);
            HWND hWndG9 = CreateWindowW(szWindowClassBtn, TEXT("ISO"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                180, 280, 75, 26, hWnd, BTN_ISO, hInst, NULL);
        }
        HWND hWndG10 = CreateWindowW(szWindowClassBtn, TEXT("下一季度"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            180, 360, 75, 26, hWnd, BTN_NEXT, hInst, NULL);
        HWND hWndG11 = CreateWindowW(szWindowClassBtn, TEXT("经营状况"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            180, 320, 75, 26, hWnd, BTN_SUMUP, hInst, NULL);
    }
    break;
    case MSG_LOAN:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        if (credit < 4.5)
            break;
        HWND hWndG1C1 = CreateWindowW(szWindowClassBtn, TEXT("短期贷款"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 200, 120, 26, hWnd, BTN_SLOAN, hInst, NULL);
        if(season == 1)
            HWND hWndG1C2 = CreateWindowW(szWindowClassBtn, TEXT("长期贷款"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 240, 120, 26, hWnd, BTN_LLOAN, hInst, NULL);
        HWND hWndG1CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_LLOAN:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 226;
        rct->top = 200;
        DrawTextW(hdc, TEXT("金额/10W"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 266;
        rct->top = 240;
        DrawTextW(hdc, TEXT("年限/年(1-5)"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        EndPaint(hWnd, &ps);
        HWND hWndG1C2TB1 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            180, 200, 120, 26, hWnd, BTN_LLOANTB1, hInst, NULL);
        HWND hWndG1C2TB2 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            180, 240, 120, 26, hWnd, BTN_LLOANTB2, hInst, NULL);
        HWND hWndG1C2CFM = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 320, 75, 26, hWnd, BTN_LOANC1, hInst, NULL);
        HWND hWndG1C2CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LOAN, hInst, NULL);
    }
    break;
    case MSG_SLOAN:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 226;
        rct->top = 200;
        DrawTextW(hdc, TEXT("金额/10W"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        EndPaint(hWnd, &ps);
        HWND hWndG1C1TB = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            180, 200, 120, 26, hWnd, BTN_SLOANTB, hInst, NULL);
        HWND hWndG1C1CFM = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 320, 75, 26, hWnd, BTN_LOANC2, hInst, NULL);
        HWND hWndG1C1CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LOAN, hInst, NULL);

    }
    break;
    case MSG_PLANT:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND hWndG2C1 = CreateWindowW(szWindowClassBtn, TEXT("购买厂房"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 200, 120, 26, hWnd, BTN_PBUY, hInst, NULL);
        HWND hWndG2C3 = CreateWindowW(szWindowClassBtn, TEXT("变卖厂房"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 280, 120, 26, hWnd, BTN_PSELL, hInst, NULL);
        if (credit < 4)
            break;
        HWND hWndG2C2 = CreateWindowW(szWindowClassBtn, TEXT("租用厂房"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 240, 120, 26, hWnd, BTN_PRENT, hInst, NULL);
        HWND hWndG2C4 = CreateWindowW(szWindowClassBtn, TEXT("停租厂房"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 320, 120, 26, hWnd, BTN_PLSUS, hInst, NULL);
        HWND hWndG2CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_PBUY:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG2C1C = new HWND[plantMaximum * 2];
        bufPtr = hWndG2C1C;
        bool a = false;
        for (int i = 0,h = 0,j = 0; i < plantMaximum; i++)
        {
            if (plant.own[i])
                continue;
            LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 14);
            wsprintfW(str1, TEXT("%s"), TEXT("购买大型厂房作为厂房#"));
            LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 14);
            wsprintfW(str2, TEXT("%s"), TEXT("购买小型厂房作为厂房#"));
            LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
            wsprintfW(str3, TEXT("%d"), i + 1);
            wcscat(str1, str3);
            wcscat(str2, str3);
            if (!a)
            {
                hWndG2C1C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 120 + j * 80, 200, 26, hWnd, (HMENU)(100 + 6 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                hWndG2C1C[i+ plantMaximum] = CreateWindowW(szWindowClassBtn, str2, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 160 + j * 80, 200, 26, hWnd, (HMENU)(100 + 7 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                j++;
                if (j >= 3)
                {
                    j = 0;
                    h++;
                }
            }
        }
        HWND hWndG2C4CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_PLANT, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG2C1C;
    }
    break;
    case MSG_PSELL:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG2C3C = new HWND[plantMaximum];
        bufPtr = hWndG2C3C;
        bool a = false;
        for (int i = 0, k = 0, h = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i] || plant.isRented[i])
                continue;
            for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + (plant.isLarge[i] ? largePlantLineMaximum : smallPlantLineMaximum); j++)
                if (line.own[j])
                    a = true;
            LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 7);
            wsprintfW(str1, TEXT("%s"), TEXT("出售厂房#"));
            LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
            wsprintfW(str2, TEXT("%d"), i + 1);
            wcscat(str1, str2);
            if (!a)
            {
                hWndG2C3C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 120 + k * 40, 120, 26, hWnd, (HMENU)(100 + 10 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                k++;
                if (k >= 7)
                {
                    k = 0;
                    h++;
                }
            }
        }
        HWND hWndG2C3CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_PLANT, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG2C3C;
    }
    break;
    case MSG_PRENT:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG2C2C = new HWND[plantMaximum * 2];
        bufPtr = hWndG2C2C;
        bool a = false;
        for (int i = 0, j = 0, h = 0; i < plantMaximum; i++)
        {
            if (plant.own[i])
                continue;
            LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 14);
            wsprintfW(str1, TEXT("%s"), TEXT("租用大型厂房作为厂房#"));
            LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 14);
            wsprintfW(str2, TEXT("%s"), TEXT("租用小型厂房作为厂房#"));
            LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
            wsprintfW(str3, TEXT("%d"), i + 1);
            wcscat(str1, str3);
            wcscat(str2, str3);
            if (!a)
            {
                hWndG2C2C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 120 + j * 80, 200, 26, hWnd, (HMENU)(100 + 8 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                hWndG2C2C[i + plantMaximum] = CreateWindowW(szWindowClassBtn, str2, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 160 + j * 80, 200, 26, hWnd, (HMENU)(100 + 9 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                j++;
                if (j >= 3)
                {
                    j = 0;
                    h++;
                }
            }
        }
        HWND hWndG2C4CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_PLANT, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG2C2C;
    }
    break;
    case MSG_PLSUS:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG2C4C = new HWND[plantMaximum];
        bufPtr = hWndG2C4C;
        bool a = false;
        for (int i = 0, k = 0, h = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i] || !plant.isRented[i])
                continue;
            for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + (plant.isLarge[i] ? largePlantLineMaximum : smallPlantLineMaximum); j++)
                if (line.own[j])
                    a = true;
            LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
            wsprintfW(str1, TEXT("%s"), TEXT("停租厂房#"));
            LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
            wsprintfW(str2, TEXT("%d"), i+1);
            wcscat(str1, str2);
            if (!a)
            {
                hWndG2C4C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                    80 + h * 220, 120 + k * 40, 120, 26, hWnd, (HMENU)(100 + 11 * plantMaximum + 2 * lineMaximumU + i), hInst, NULL);
                k++;
                if (k >= 7)
                {
                    k = 0;
                    h++;
                }
            }
        }
        HWND hWndG2C4CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_PLANT, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG2C4C;
    }
    break;
    case MSG_LINE:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND hWndG3C5 = CreateWindowW(szWindowClassBtn, TEXT("生产"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 280, 75, 26, hWnd, BTN_PRDC, hInst, NULL);
        HWND hWndG3C6 = CreateWindowW(szWindowClassBtn, TEXT("转产"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 280, 75, 26, hWnd, BTN_PRDV, hInst, NULL);
        HWND hWndG3CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        if (credit < 3.5)
            break;
        HWND hWndG3C1 = CreateWindowW(szWindowClassBtn, TEXT("购买生产线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 200, 120, 26, hWnd, BTN_LBUY, hInst, NULL);
        HWND hWndG3C3 = CreateWindowW(szWindowClassBtn, TEXT("变卖生产线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 200, 120, 26, hWnd, BTN_LSELL, hInst, NULL);
        if (credit < 4)
            break;
        HWND hWndG3C2 = CreateWindowW(szWindowClassBtn, TEXT("租用生产线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            80, 240, 120, 26, hWnd, BTN_LRENT, hInst, NULL);
        HWND hWndG3C4 = CreateWindowW(szWindowClassBtn, TEXT("停租生产线"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 240, 120, 26, hWnd, BTN_LLSUS, hInst, NULL);
    }
    break;
    case MSG_LBUY:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND *hWndG3C1C = new HWND[plantMaximum];
        bufPtr = hWndG3C1C;
            LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
            LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
            LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
            LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
            LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0, j = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("为厂房#"));
            wsprintfW(str2, TEXT("%d"), (i+1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 购买生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG3C1C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + i), hInst, NULL);
            j++;
        }
        HWND hWndG3C1CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C1C;
    }
    break;
    case MSG_LSELL:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C3C = new HWND[plantMaximum];
        bufPtr = hWndG3C3C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0, j = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("变卖厂房#"));
            wsprintfW(str2, TEXT("%d"), (i + 1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 中的生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG3C3C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + i + 2 * plantMaximum), hInst, NULL);
            j++;
        }
        HWND hWndG3C3CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C3C;
    }
    break;
    case MSG_LRENT:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C2C = new HWND[plantMaximum];
        bufPtr = hWndG3C2C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0, j = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("为厂房#"));
            wsprintfW(str2, TEXT("%d"), (i + 1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 租用生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG3C2C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + i + plantMaximum), hInst, NULL);
            j++;
        }
        HWND hWndG3C2CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C2C;
    }
    break;
    case MSG_LLSUS:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG3C4C = new HWND[plantMaximum];
        bufPtr = hWndG3C4C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0, j = 0; i < plantMaximum; i++)
        {
            if (!plant.own[i])
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("停租厂房#"));
            wsprintfW(str2, TEXT("%d"), (i + 1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 中的生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG3C4C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + j * 40, 240, 26, hWnd, (HMENU)(100 + i + 3 * plantMaximum), hInst, NULL);
            j++;
        }
        HWND hWndG3C4CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_LINE, hInst, NULL);
        bufPtr = new void* [0];
        delete[]hWndG3C4C;
    }
    break;
    case MSG_DVLP:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        int i = 0;
        if (productDevelopment[0] > 0 && !productDevelopementInvested[0])
        {
            HWND hWndG5C1 = CreateWindowW(szWindowClassBtn, TEXT("研发Ⅰ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_PDV1, hInst, NULL);
            i++;
        }
        if (productDevelopment[1] > 0 && !productDevelopementInvested[1])
        {
            HWND hWndG5C2 = CreateWindowW(szWindowClassBtn, TEXT("研发Ⅱ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_PDV2, hInst, NULL);
            i++;
        }
        if (productDevelopment[2] > 0 && !productDevelopementInvested[2])
        {
            HWND hWndG5C3 = CreateWindowW(szWindowClassBtn, TEXT("研发Ⅲ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_PDV3, hInst, NULL);
            i++;
        }
        if (productDevelopment[3] > 0 && !productDevelopementInvested[3] && ISOt[0] == 0)
        {
            HWND hWndG5C4 = CreateWindowW(szWindowClassBtn, TEXT("研发Ⅳ型产品"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_PDV4, hInst, NULL);
            i++;
        }
        HWND hWndG5CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_MKT:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        int i = 0;
        if (productDevelopment[0] > 0 && !productDevelopementInvested[0])
        {
            HWND hWndG6C1 = CreateWindowW(szWindowClassBtn, TEXT("开拓本地市场"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_MDV1, hInst, NULL);
            i++;
        }
        if (marketDevelopment[1] > 0 && !marketDevelopementInvested[1])
        {
            HWND hWndG6C2 = CreateWindowW(szWindowClassBtn, TEXT("开拓区域市场"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_MDV2, hInst, NULL);
            i++;
        }
        if (marketDevelopment[2] > 0 && !marketDevelopementInvested[2])
        {
            HWND hWndG6C3 = CreateWindowW(szWindowClassBtn, TEXT("开拓国内市场"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_MDV3, hInst, NULL);
            i++;
        }
        if (marketDevelopment[3] > 0 && !marketDevelopementInvested[3])
        {
            HWND hWndG6C4 = CreateWindowW(szWindowClassBtn, TEXT("开拓亚洲市场"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_MDV4, hInst, NULL);
            i++;
        }
        if (marketDevelopment[4] > 0 && !marketDevelopementInvested[4])
        {
            HWND hWndG6C4 = CreateWindowW(szWindowClassBtn, TEXT("开拓世界市场"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_MDV5, hInst, NULL);
            i++;
        }
        HWND hWndG6CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_ISO:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        int i = 0;
        if (ISOt[0] > 0 && !ISOi[0])
        {
            HWND hWndG7C1 = CreateWindowW(szWindowClassBtn, TEXT("开发ISO9000"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_IDV1, hInst, NULL);
            i++;
        }
        if (ISOt[1] > 0 && !ISOi[1])
        {
            HWND hWndG7C2 = CreateWindowW(szWindowClassBtn, TEXT("开发ISO14000"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 40, 160, 26, hWnd, BTN_IDV2, hInst, NULL);
            i++;
        }
        HWND hWndG7CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_MTR:
    {
        InvalidateRect(hWnd, NULL, true);
        messageBuffer = message;
        DestroyAllChildWindow(hWnd, NULL);

        static int an, bn, cn, dn;
        if (LOWORD(wParam) == 1)
        {
            DestroyAllChildWindow(hWnd, NULL);
            InvalidateRect(hWnd, NULL, true);
            materialNum[0] += an;
            materialNum[1] += bn;
            materialNum[2] += cn;
            materialNum[3] += dn;
            SendMessageW(hWnd, MSG_GAME, NULL, NULL);
            return 0;
        }
        else if (LOWORD(wParam) == 2)
        {
            an++;
        }
        else if (LOWORD(wParam) == 3)
        {
            bn++;
        }
        else if (LOWORD(wParam) == 4)
        {
            cn++;
        }
        else if (LOWORD(wParam) == 5)
        {
            dn++;
        }
        else if (LOWORD(wParam) == 6 && an > 0)
        {
            an--;
        }
        else if (LOWORD(wParam) == 7 && bn > 0)
        {
            bn--;
        }
        else if (LOWORD(wParam) == 8 && cn > 0)
        {
            cn--;
        }
        else if (LOWORD(wParam) == 9 && dn > 0)
        {
            dn--;
        }
        LPWSTR strA = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR strB = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR strC = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR strD = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        wsprintfW(strA, TEXT("%d"), an);
        wsprintfW(strB, TEXT("%d"), bn);
        wsprintfW(strC, TEXT("%d"), cn);
        wsprintfW(strD, TEXT("%d"), dn);

        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);

        rct->right = 200;
        rct->left = 80;
        rct->bottom = 226;
        rct->top = 200;
        DrawTextW(hdc, TEXT("Ⅰ型原材料:"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 185;
        rct->bottom = 226;
        rct->top = 200;
        DrawTextW(hdc, strA, -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);

        rct->right = 200;
        rct->left = 80;
        rct->bottom = 266;
        rct->top = 240;
        DrawTextW(hdc, TEXT("Ⅱ型原材料:"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 185;
        rct->bottom = 266;
        rct->top = 240;
        DrawTextW(hdc, strB, -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);

        rct->right = 200;
        rct->left = 80;
        rct->bottom = 306;
        rct->top = 280;
        DrawTextW(hdc, TEXT("Ⅲ型原材料:"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 185;
        rct->bottom = 306;
        rct->top = 280;
        DrawTextW(hdc, strC, -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);

        rct->right = 200;
        rct->left = 80;
        rct->bottom = 346;
        rct->top = 320;
        DrawTextW(hdc, TEXT("Ⅳ型原材料:"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 185;
        rct->bottom = 346;
        rct->top = 320;
        DrawTextW(hdc, strD, -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);

        EndPaint(hWnd, &ps);
        HWND hWndG8C1P = CreateWindowW(szWindowClassBtn, TEXT("+"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            210, 200, 26, 26, hWnd, BTN_MTR1P, hInst, NULL);
        HWND hWndG8C2P = CreateWindowW(szWindowClassBtn, TEXT("+"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            210, 240, 26, 26, hWnd, BTN_MTR2P, hInst, NULL);
        HWND hWndG8C3P = CreateWindowW(szWindowClassBtn, TEXT("+"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            210, 280, 26, 26, hWnd, BTN_MTR3P, hInst, NULL);
        HWND hWndG8C4P = CreateWindowW(szWindowClassBtn, TEXT("+"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            210, 320, 26, 26, hWnd, BTN_MTR4P, hInst, NULL);
        HWND hWndG8C1M = CreateWindowW(szWindowClassBtn, TEXT("-"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 200, 26, 26, hWnd, BTN_MTR1M, hInst, NULL);
        HWND hWndG8C2M = CreateWindowW(szWindowClassBtn, TEXT("-"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 240, 26, 26, hWnd, BTN_MTR2M, hInst, NULL);
        HWND hWndG8C3M = CreateWindowW(szWindowClassBtn, TEXT("-"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 280, 26, 26, hWnd, BTN_MTR3M, hInst, NULL);
        HWND hWndG8C4M = CreateWindowW(szWindowClassBtn, TEXT("-"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            240, 320, 26, 26, hWnd, BTN_MTR4M, hInst, NULL);
        HWND hWndG8CFM = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            120, 360, 75, 26, hWnd, BTN_MTRCFM, hInst, NULL);
        HWND hWndG8CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_PRDC:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG9C = new HWND[plantMaximum];
        bufPtr = hWndG9C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0; plant.own[i] && i < plantMaximum; i++)
        {
            bool empty = true;
            for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + largePlantLineMaximum; j++)
            {
                if (line.own[j] && line.convertingSeasonLast[j] == 0 && line.installSeasonLast[j] == 0 && line.productSeasonLast[j] == 0 && line.productType[j] != PRODUCTTYPE_NONE)
                {
                    empty = false;
                    break;
                }
            }
            if (empty)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("使用厂房 "));
            wsprintfW(str2, TEXT("%d"), (i + 1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 中的生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG9C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 34, 240, 26, hWnd, (HMENU)(100 + i + 4 * plantMaximum), hInst, NULL);
        }
        HWND hWndG9CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        delete[]hWndG9C;
        bufPtr = new void* [0];
    }
    break;
    case MSG_PRDV:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND* hWndG9C = new HWND[plantMaximum];
        bufPtr = hWndG9C;
        LPWSTR str1 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str2 = (LPWSTR)malloc(sizeof(WCHAR) * 2);
        LPWSTR str3 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str4 = (LPWSTR)malloc(sizeof(WCHAR) * 8);
        LPWSTR str5 = (LPWSTR)malloc(sizeof(WCHAR) * 12);
        for (int i = 0; plant.own[i] && i < plantMaximum; i++)
        {
            bool empty = true;
            for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + largePlantLineMaximum; j++)
            {
                if (line.own[j] && line.convertingSeasonLast[j] == 0 && line.installSeasonLast[j] == 0 && line.productSeasonLast[j] == 0)
                {
                    empty = false;
                    break;
                }
            }
            if (empty)
                continue;
            wsprintfW(str1, TEXT("%s"), TEXT("操作厂房 "));
            wsprintfW(str2, TEXT("%d"), (i + 1));
            wsprintfW(str3, TEXT("%s"), plant.isLarge[i] ? (TEXT(" (大) ")) : (TEXT(" (小) ")));
            wsprintfW(str4, TEXT("%s"), plant.isRented[i] ? (TEXT(" (租用) ")) : (TEXT(" (非租用) ")));
            wsprintfW(str5, TEXT("%s"), TEXT(" 中的生产线"));
            wcscat(str1, str2);
            wcscat(str1, str3);
            wcscat(str1, str4);
            wcscat(str1, str5);
            hWndG9C[i] = CreateWindowW(szWindowClassBtn, str1, WS_VISIBLE | WS_BORDER | WS_CHILD,
                80, 200 + i * 34, 240, 26, hWnd, (HMENU)(100 + i + 5 * plantMaximum), hInst, NULL);
        }
        HWND hWndG9CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
        delete[]hWndG9C;
        bufPtr = new void* [0];
    }
    break;
    case MSG_ORDR:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        HWND hWndG10C1 = CreateWindowW(szWindowClassBtn, TEXT("自定义"), WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            80, 200, 120, 26, hWnd, BTN_ORDRC, hInst, NULL);
        HWND hWndG10C2 = CreateWindowW(szWindowClassBtn, TEXT("随机生成"), WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            80, 240, 120, 26, hWnd, BTN_ORDRR, hInst, NULL);
        HWND hWndG10CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_CANCEL, hInst, NULL);
    }
    break;
    case MSG_ORDRC:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 226;
        rct->top = 200;
        DrawTextW(hdc, TEXT("Ⅰ型产品需求/个"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 266;
        rct->top = 240;
        DrawTextW(hdc, TEXT("Ⅱ型产品需求/个"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 306;
        rct->top = 280;
        DrawTextW(hdc, TEXT("Ⅲ型产品需求/个"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 346;
        rct->top = 320;
        DrawTextW(hdc, TEXT("Ⅳ型产品需求/个"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        rct->right = 200;
        rct->left = 80;
        rct->bottom = 386;
        rct->top = 360;
        DrawTextW(hdc, TEXT("账期"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        EndPaint(hWnd, &ps);
        HWND hWndG10C1TB1 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            200, 200, 120, 26, hWnd, BTN_ORDRCTB1, hInst, NULL);
        HWND hWndG10C1TB2 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            200, 240, 120, 26, hWnd, BTN_ORDRCTB2, hInst, NULL);
        HWND hWndG10C1TB3 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            200, 280, 120, 26, hWnd, BTN_ORDRCTB3, hInst, NULL);
        HWND hWndG10C1TB4 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            200, 320, 120, 26, hWnd, BTN_ORDRCTB4, hInst, NULL);
        HWND hWndG10C1TB5 = CreateWindowW(TEXT("Edit"), NULL, WS_VISIBLE | WS_BORDER | WS_CHILD | ES_LEFT | ES_NUMBER,
            200, 360, 120, 26, hWnd, BTN_ORDRCTB5, hInst, NULL);
        HWND hWndG10C1CFM = CreateWindowW(szWindowClassBtn, TEXT("确定"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 320, 75, 26, hWnd, BTN_ORDRCC, hInst, NULL);
        HWND hWndG10C1CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            520, 360, 75, 26, hWnd, BTN_ORDR, hInst, NULL);
    }
    break;
    case MSG_ORDRR:
    {
        DestroyAllChildWindow(hWnd, NULL);
        InvalidateRect(hWnd, NULL, true);
        if (!sranded)
        {
            srand(time(0));
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                    needs[i][j] = rand() % 5;
                urgent[i] = ((rand() % 100 + 1) <= urgentOrderAppearancePercentage) ? true : false;
                needISO14000[i] = ((rand() % 100 + 1) <= ISOOrderAppearancePercentage) ? true : false;
                int c = 0;
                for (int j = 0; j < 4; j++)
                    c += needs[i][j] * productProducingTime[j];
                tim[i] = urgent[i] ? 1 : ((rand() % c) + 1);
            }
            sranded = true;
        }
        LPWSTR buffer = (LPWSTR)malloc(sizeof(WCHAR) * 6);
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00FFFFFF);
        if (tim[0] != -1 && (!needISO14000[0] || ISOt[1] == 0))
        {
            TextOutW(hdc, 80, 20, TEXT("订单1"), wcslen(TEXT("订单1")));
            TextOutW(hdc, 80, 20 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[0][0]);
            TextOutW(hdc, 146, 20 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 20 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[0][1]);
            TextOutW(hdc, 146, 20 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 20 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[0][2]);
            TextOutW(hdc, 146, 20 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 20 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[0][3]);
            TextOutW(hdc, 146, 20 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 20 + 110, urgent[0] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[0]);
            TextOutW(hdc, 80, 20 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C1 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                205, 209, 75, 26, hWnd, BTN_ORDRS1, hInst, NULL);
        }
        if (tim[1] != -1 && (!needISO14000[1] || ISOt[1] == 0))
        {
            TextOutW(hdc, 300, 20, TEXT("订单2"), wcslen(TEXT("订单2")));
            TextOutW(hdc, 220 + 80, 20 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[1][0]);
            TextOutW(hdc, 220 + 146, 20 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 20 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[1][1]);
            TextOutW(hdc, 220 + 146, 20 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 20 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[1][2]);
            TextOutW(hdc, 220 + 146, 20 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 20 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[1][3]);
            TextOutW(hdc, 220 + 146, 20 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 20 + 110, urgent[1] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[1]);
            TextOutW(hdc, 220 + 80, 20 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C2 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                425, 209, 75, 26, hWnd, BTN_ORDRS2, hInst, NULL);
        }
        if (tim[2] != -1 && (!needISO14000[2] || ISOt[1] == 0))
        {
            TextOutW(hdc, 520, 20, TEXT("订单3"), wcslen(TEXT("订单3")));
            TextOutW(hdc, 220 + 220 + 80, 20 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[2][0]);
            TextOutW(hdc, 220 + 220 + 146, 20 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 20 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[2][1]);
            TextOutW(hdc, 220 + 220 + 146, 20 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 20 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[2][2]);
            TextOutW(hdc, 220 + 220 + 146, 20 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 20 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[2][3]);
            TextOutW(hdc, 220 + 220 + 146, 20 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 200 + 80, 20 + 110, urgent[2] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[2]);
            TextOutW(hdc, 220 + 220 + 80, 20 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C3 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                645, 209, 75, 26, hWnd, BTN_ORDRS3, hInst, NULL);
        }
        if (tim[3] != -1 && (!needISO14000[3] || ISOt[1] == 0))
        {
            TextOutW(hdc, 80, 260, TEXT("订单4"), wcslen(TEXT("订单4")));
            TextOutW(hdc, 80, 260 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[3][0]);
            TextOutW(hdc, 146, 260 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 260 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[3][1]);
            TextOutW(hdc, 146, 260 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 260 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[3][2]);
            TextOutW(hdc, 146, 260 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 260 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[3][3]);
            TextOutW(hdc, 146, 260 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 80, 260 + 110, urgent[3] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[3]);
            TextOutW(hdc, 80, 260 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C4 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                205, 449, 75, 26, hWnd, BTN_ORDRS4, hInst, NULL);
        }
        if (tim[4] != -1 && (!needISO14000[4] || ISOt[1] == 0))
        {
            TextOutW(hdc, 300, 260, TEXT("订单5"), wcslen(TEXT("订单5")));
            TextOutW(hdc, 220 + 80, 260 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[4][0]);
            TextOutW(hdc, 220 + 146, 260 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 260 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[4][1]);
            TextOutW(hdc, 220 + 146, 260 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 260 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[4][2]);
            TextOutW(hdc, 220 + 146, 260 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 260 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[4][3]);
            TextOutW(hdc, 220 + 146, 260 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 80, 260 + 110, urgent[4] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[4]);
            TextOutW(hdc, 220 + 80, 260 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C5 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                425, 449, 75, 26, hWnd, BTN_ORDRS5, hInst, NULL);
        }
        if (tim[5] != -1 && (!needISO14000[5] || ISOt[1] == 0))
        {
            TextOutW(hdc, 520, 260, TEXT("订单6"), wcslen(TEXT("订单6")));
            TextOutW(hdc, 220 + 220 + 80, 260 + 38, TEXT("Ⅰ型产品："), wcslen(TEXT("Ⅰ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[5][0]);
            TextOutW(hdc, 220 + 220 + 146, 260 + 38, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 260 + 56, TEXT("Ⅱ型产品："), wcslen(TEXT("Ⅱ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[5][1]);
            TextOutW(hdc, 220 + 220 + 146, 260 + 56, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 260 + 74, TEXT("Ⅲ型产品："), wcslen(TEXT("Ⅲ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[5][2]);
            TextOutW(hdc, 220 + 220 + 146, 260 + 74, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 260 + 92, TEXT("Ⅳ型产品："), wcslen(TEXT("Ⅳ型产品：")));
            wsprintfW(buffer, TEXT(" %d 个"), needs[5][3]);
            TextOutW(hdc, 220 + 220 + 146, 260 + 92, buffer, wcslen(buffer));
            TextOutW(hdc, 220 + 220 + 80, 260 + 110, urgent[5] ? TEXT("是否为加急单：是") : TEXT("是否为加急单：否"), max(wcslen(TEXT("是否为加急单：是")), wcslen(TEXT("是否为加急单：否"))));
            wsprintfW(buffer, TEXT("时限： %d 个账期"), tim[5]);
            TextOutW(hdc, 220 + 220 + 80, 260 + 128, buffer, wcslen(buffer));
            HWND hWndG10C2C6 = CreateWindowW(szWindowClassBtn, TEXT("接受"), WS_VISIBLE | WS_BORDER | WS_CHILD,
                645, 449, 75, 26, hWnd, BTN_ORDRS6, hInst, NULL);
        }
        EndPaint(hWnd, &ps);
        HWND hWndG10C2CCL = CreateWindowW(szWindowClassBtn, TEXT("取消"), WS_VISIBLE | WS_BORDER | WS_CHILD,
            700, 510, 75, 26, hWnd, BTN_ORDR, hInst, NULL);
    }
    break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
        if (!inGame)
        {
            SetBkMode(hdc, TRANSPARENT);
            SetTextColor(hdc, 0x00FFFFFF);
            LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
            GetWindowRect(hWnd, rct);
            rct->right = rct->right - rct->left;
            rct->left = 0;
            rct->bottom = rct->bottom - rct->top;
            rct->top = 0;
            DrawTextW(hdc, TEXT("点击开始"), -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        }
            EndPaint(hWnd, &ps);
        }
    break;
    case WM_DESTROY:
        PostQuitMessage(0);
    break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}
INT_PTR CALLBACK Contributer(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;
        break;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
INT_PTR CALLBACK IniNotExist(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;
        break;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
LRESULT CALLBACK Btn(HWND hWndBtn, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_LBUTTONDOWN:
    {
        int menu = (int)GetMenu(hWndBtn);
        if (menu >= 100 && menu < 100 + 6 * plantMaximum + 2 * lineMaximumU)
        {
            SendMessageW(GetParent(hWndBtn), (WPARAM)(WM_USER + 100 + menu), NULL, NULL);
            break;
        }
        else if (menu >= 100 + 6 * plantMaximum + 2 * lineMaximumU && menu < 100 + 7 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 6 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isLarge[menu - 100 - 6 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isRented[menu - 100 - 6 * plantMaximum - 2 * lineMaximumU] = false;
            plant.seasonRenteNum[menu - 100 - 6 * plantMaximum - 2 * lineMaximumU] = 0;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 7 * plantMaximum + 2 * lineMaximumU && menu < 100 + 8 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 7 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isLarge[menu - 100 - 7 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isRented[menu - 100 - 7 * plantMaximum - 2 * lineMaximumU] = false;
            plant.seasonRenteNum[menu - 100 - 7 * plantMaximum - 2 * lineMaximumU] = 0;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 8 * plantMaximum + 2 * lineMaximumU && menu < 100 + 9 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 8 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isLarge[menu - 100 - 8 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isRented[menu - 100 - 8 * plantMaximum - 2 * lineMaximumU] = true;
            plant.seasonRenteNum[menu - 100 - 8 * plantMaximum - 2 * lineMaximumU] = season;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 9 * plantMaximum + 2 * lineMaximumU && menu < 100 + 10 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 9 * plantMaximum - 2 * lineMaximumU] = true;
            plant.isLarge[menu - 100 - 9 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isRented[menu - 100 - 9 * plantMaximum - 2 * lineMaximumU] = true;
            plant.seasonRenteNum[menu - 100 - 9 * plantMaximum - 2 * lineMaximumU] = season;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 10 * plantMaximum + 2 * lineMaximumU && menu < 100 + 11 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 10 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isLarge[menu - 100 - 10 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isRented[menu - 100 - 10 * plantMaximum - 2 * lineMaximumU] = false;
            plant.seasonRenteNum[menu - 100 - 10 * plantMaximum - 2 * lineMaximumU] = 0;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 11 * plantMaximum + 2 * lineMaximumU && menu < 100 + 12 * plantMaximum + 2 * lineMaximumU)
        {
            plant.own[menu - 100 - 11 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isLarge[menu - 100 - 11 * plantMaximum - 2 * lineMaximumU] = false;
            plant.isRented[menu - 100 - 11 * plantMaximum - 2 * lineMaximumU] = false;
            plant.seasonRenteNum[menu - 100 - 11 * plantMaximum - 2 * lineMaximumU] = 0;
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        }
        else if (menu >= 100 + 12 * plantMaximum + 2 * lineMaximumU && menu < 100 + 12 * plantMaximum + 3 * lineMaximumU)
        {
            SendMessageW(GetParent(hWndBtn), (WPARAM)(WM_USER + 200 + 6 * plantMaximum + 2 * lineMaximumU), menu - (100 + 12 * plantMaximum + 2 * lineMaximumU), NULL);
        }
        else if (menu >= 100 + 12 * plantMaximum + 3 * lineMaximumU && menu < 100 + 12 * plantMaximum + 4 * lineMaximumU)
        {
            line.own[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = true;
            line.lineType[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = LINETYPE_RENTED;
            line.installSeasonLast[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = lineInstallCycle[line.lineType[menu - (100 + 12 * plantMaximum + 2 * lineMaximumU)]];
            line.convertingSeasonLast[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = 0;
            line.productSeasonLast[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = 0;
            line.productType[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = PRODUCTTYPE_NONE;
            line.seasonRented[menu - (100 + 12 * plantMaximum + 3 * lineMaximumU)] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_LINE, NULL, NULL);
        }
        else if (menu >= 100 + 12 * plantMaximum + 4 * lineMaximumU && menu < 100 + 12 * plantMaximum + 5 * lineMaximumU)
        {
            sum += lineOriginalValue[line.lineType[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)]] * (linebuf.seasonRented[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] >= 4 ? 0.2 : (1 - 0.2 * linebuf.seasonRented[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)]));
            line.own[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = false;
            line.lineType[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = -1;
            line.installSeasonLast[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = 0;
            line.convertingSeasonLast[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = 0;
            line.productSeasonLast[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = 0;
            line.productType[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = PRODUCTTYPE_NONE;
            line.seasonRented[menu - (100 + 12 * plantMaximum + 4 * lineMaximumU)] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_LINE, NULL, NULL);
        }
        else if (menu >= 100 + 12 * plantMaximum + 5 * lineMaximumU && menu < 100 + 12 * plantMaximum + 6 * lineMaximumU)
        {
            line.own[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = false;
            line.lineType[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = -1;
            line.installSeasonLast[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = 0;
            line.convertingSeasonLast[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = 0;
            line.productSeasonLast[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = 0;
            line.productType[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = PRODUCTTYPE_NONE;
            line.seasonRented[menu - (100 + 12 * plantMaximum + 5 * lineMaximumU)] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_LINE, NULL, NULL);
        }
        else if (menu >= (100 + 12 * plantMaximum + 6 * lineMaximumU) && menu < (100 + 12 * plantMaximum + 6 * lineMaximumU + 4))
        {
            line.own[messageBuffer] = true;
            line.lineType[messageBuffer] = menu - (100 + 12 * plantMaximum + 6 * lineMaximumU);
            line.installSeasonLast[messageBuffer] = lineInstallCycle[line.lineType[messageBuffer]];
            line.convertingSeasonLast[messageBuffer] = 0;
            line.productSeasonLast[messageBuffer] = 0;
            line.productType[messageBuffer] = PRODUCTTYPE_NONE;
            line.seasonRented[messageBuffer] = 0;
            sum -= linePrice[line.lineType[messageBuffer]];
            SendMessageW(GetParent(hWndBtn), MSG_LINE, NULL, NULL);
        }
        switch (menu)
        {
        case (int)BTN_LOAN:
            SendMessageW(GetParent(hWndBtn), MSG_LOAN, NULL, NULL);
        break;
        case (int)BTN_LLOAN:
            SendMessageW(GetParent(hWndBtn), MSG_LLOAN, NULL, NULL);
        break;
        case (int)BTN_SLOAN:
            SendMessageW(GetParent(hWndBtn), MSG_SLOAN, NULL, NULL);
        break;
        case (int)BTN_LOANC1:
        {
            int year, money;

            money = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_LLOANTB1, NULL, 1);

            year = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_LLOANTB2, NULL, 1);
            if (year < 1 || year > 5 || money <= 0 || money * 10 > loanLimit + loaned)
                break;
            money *= 10;
            sum += money;
            loaned -= money;
            loan.moneyR[loanNum] = money * (-1);
            loan.moneyT[loanNum] = money * (-1);
            loan.seasonR[loanNum] = year * 4;
            loan.yearT[loanNum] = year;
            loan.isLong[loanNum] = true;
            loan.notLoan[loanNum] = false;
            loanNum++;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_LOANC2:
        {
            int year, money;

            money = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_SLOANTB, NULL, 1);
            if (money <= 0 || money * 10 > loanLimit + loaned)
                break;
            money *= 10;
            sum += money;
            loaned -= money;
            loan.moneyR[loanNum] = money * (-1);
            loan.moneyT[loanNum] = money * (-1);
            loan.seasonR[loanNum] = shortTermLoanLeaseSeason;
            loan.yearT[loanNum] = 0;
            loan.isLong[loanNum] = false;
            loan.notLoan[loanNum] = false;
            loanNum++;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_PLANT:
            SendMessageW(GetParent(hWndBtn), MSG_PLANT, NULL, NULL);
        break;
        case (int)BTN_PBUY:
            SendMessageW(GetParent(hWndBtn), MSG_PBUY, NULL, NULL);
        break;
        case (int)BTN_PRENT:
            SendMessageW(GetParent(hWndBtn), MSG_PRENT, NULL, NULL);
        break;
        case (int)BTN_PSELL:
            SendMessageW(GetParent(hWndBtn), MSG_PSELL, NULL, NULL);
        break;
        case (int)BTN_PLSUS:
            SendMessageW(GetParent(hWndBtn), MSG_PLSUS, NULL, NULL);
        break;
        case (int)BTN_LINE:
            SendMessageW(GetParent(hWndBtn), MSG_LINE, NULL, NULL);
        break;
        case (int)BTN_LBUY:
            SendMessageW(GetParent(hWndBtn), MSG_LBUY, NULL, NULL);
        break;
        case (int)BTN_LSELL:
            SendMessageW(GetParent(hWndBtn), MSG_LSELL, NULL, NULL);
        break;
        case (int)BTN_LRENT:
            SendMessageW(GetParent(hWndBtn), MSG_LRENT, NULL, NULL);
        break;
        case (int)BTN_LLSUS:
            SendMessageW(GetParent(hWndBtn), MSG_LLSUS, NULL, NULL);
        break;
        case (int)BTN_DVLP:
            SendMessageW(GetParent(hWndBtn), MSG_DVLP, NULL, NULL);
        break;
        case (int)BTN_PDV1:
        {
            productDevelopementInvested[0] = true;
            sum -= productDevelopingCostE[0];
            productDevelopment[0]--;
            SendMessageW(GetParent(hWndBtn), MSG_DVLP, NULL, NULL);
        }
        break;
        case (int)BTN_PDV2:
        {
            productDevelopementInvested[1] = true;
            sum -= productDevelopingCostE[1];
            productDevelopment[1]--;
            SendMessageW(GetParent(hWndBtn), MSG_DVLP, NULL, NULL);
        }
        break;
        case (int)BTN_PDV3:
        {
            productDevelopementInvested[2] = true;
            sum -= productDevelopingCostE[2];
            productDevelopment[2]--;
            SendMessageW(GetParent(hWndBtn), MSG_DVLP, NULL, NULL);
        }
        break;
        case (int)BTN_PDV4:
        {
            productDevelopementInvested[3] = true;
            sum -= productDevelopingCostE[3];
            productDevelopment[3]--;
            SendMessageW(GetParent(hWndBtn), MSG_DVLP, NULL, NULL);
        }
        break;
        case (int)BTN_MDV1:
        {
            marketDevelopementInvested[0] = true;
            sum -= marketDevelopingCostE[0];
            marketDevelopment[0]--;
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        }
        break;
        case (int)BTN_MDV2:
        {
            marketDevelopementInvested[1] = true;
            sum -= marketDevelopingCostE[1];
            marketDevelopment[1]--;
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        }
        break;
        case (int)BTN_MDV3:
        {
            marketDevelopementInvested[2] = true;
            sum -= marketDevelopingCostE[2];
            marketDevelopment[2]--;
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        }
        break;
        case (int)BTN_MDV4:
        {
            marketDevelopementInvested[3] = true;
            sum -= marketDevelopingCostE[3];
            marketDevelopment[3]--;
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        }
        break;
        case (int)BTN_MDV5:
        {
            marketDevelopementInvested[4] = true;
            sum -= marketDevelopingCostE[4];
            marketDevelopment[4]--;
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        }
        break;
        case (int)BTN_MTR:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, NULL, NULL);
        break;
        case (int)BTN_MTR1P:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 2, NULL);
        break;
        case (int)BTN_MTR2P:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 3, NULL);
        break;
        case (int)BTN_MTR3P:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 4, NULL);
        break;
        case (int)BTN_MTR4P:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 5, NULL);
        break;
        case (int)BTN_MTR1M:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 6, NULL);
        break;
        case (int)BTN_MTR2M:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 7, NULL);
        break;
        case (int)BTN_MTR3M:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 8, NULL);
        break;
        case (int)BTN_MTR4M:
            SendMessageW(GetParent(hWndBtn), MSG_MTR, 9, NULL);
        break;
        case (int)BTN_MKT:
            SendMessageW(GetParent(hWndBtn), MSG_MKT, NULL, NULL);
        break;
        case (int)BTN_ISO:
            SendMessageW(GetParent(hWndBtn), MSG_ISO, NULL, NULL);
        break;
        case (int)BTN_G11U:
            SendMessageW(GetParent(hWndBtn), MSG_SUMUP, 1, NULL);
            break;
        case (int)BTN_G11D:
            SendMessageW(GetParent(hWndBtn), MSG_SUMUP, 2, NULL);
            break;
        case (int)BTN_IDV1:
        {
            ISOi[0] = true;
            sum -= ISOcE[0];
            ISOt[0]--;
            SendMessageW(GetParent(hWndBtn), MSG_ISO, NULL, NULL);
        }
        break;
        case (int)BTN_IDV2:
        {
            ISOi[1] = true;
            sum -= ISOcE[1];
            ISOt[1]--;
            SendMessageW(GetParent(hWndBtn), MSG_ISO, NULL, NULL);
        }
        break;
        case (int)BTN_PRDV:
            SendMessageW(GetParent(hWndBtn), MSG_PRDV, NULL, NULL);
        break;
        case (int)BTN_PRDC:
            SendMessageW(GetParent(hWndBtn), MSG_PRDC, NULL, NULL);
        break;
        case (int)BTN_PRD1:
            SendMessageW(GetParent(hWndBtn), messageBuffer, 1, NULL);
        break;
        case (int)BTN_PRD2:
            SendMessageW(GetParent(hWndBtn), messageBuffer, 2, NULL);
        break;
        case (int)BTN_PRD3:
            SendMessageW(GetParent(hWndBtn), messageBuffer, 3, NULL);
        break;
        case (int)BTN_PRD4:
            SendMessageW(GetParent(hWndBtn), messageBuffer, 4, NULL);
        break;
        case (int)BTN_ORDR:
        {
            SendMessageW(GetParent(hWndBtn), MSG_ORDR, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS1:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
            order.product[i][j] = needs[0][j];
            order.time[i] = tim[0];
            order.urgent[i] = urgent[0];
            tim[0] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS2:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = needs[1][j];
            order.time[i] = tim[1];
            order.urgent[i] = urgent[1];
            tim[1] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS3:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = needs[2][j];
            order.time[i] = tim[2];
            order.urgent[i] = urgent[2];
            tim[2] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS4:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = needs[3][j];
            order.time[i] = tim[3];
            order.urgent[i] = urgent[3];
            tim[3] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS5:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = needs[4][j];
            order.time[i] = tim[4];
            order.urgent[i] = urgent[4];
            tim[4] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRS6:
        {
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = needs[5][j];
            order.time[i] = tim[5];
            order.urgent[i] = urgent[5];
            tim[5] = -1;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRC:
            SendMessageW(GetParent(hWndBtn), MSG_ORDRC, NULL, NULL);
        break;
        case (int)BTN_ORDRCC:
        {
            int t, p[4];
            p[0] = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_ORDRCTB1, NULL, 1);
            p[1] = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_ORDRCTB2, NULL, 1);
            p[2] = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_ORDRCTB3, NULL, 1);
            p[3] = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_ORDRCTB4, NULL, 1);
            t = GetDlgItemInt(GetParent(hWndBtn), (int)BTN_ORDRCTB5, NULL, 1);
            if (p[0] == 0 && p[1] == 0 && p[2] == 0 && p[3] == 0)
                break;
            int i = 0;
            for (; order.time[i] != 0 && i < 10; i++);
            for (int j = 0; j < 4; j++)
                order.product[i][j] = p[j];
            if (t == 0)
            {
                t = 1;
                order.urgent[i] = true;
            }
            else
                order.urgent[i] = false;
            order.time[i] = t;
            sum--;
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_ORDRR:
            SendMessageW(GetParent(hWndBtn), MSG_ORDRR, NULL, NULL);
        break;
        case (int)BTN_NEXT:
        {
            season++;
            if (season > 4)
            {
                season = 1;
                year++;
                sranded = false;
            }
            for (int i = 0; order.time[i] != 0 && i < 10; i++)
            {
                if (order.time[i] > 0)
                {
                    order.time[i]--;
                    if (order.time[i] == 0)
                    {
                        if (productNum[0] < order.product[i][0] || productNum[1] < order.product[i][1]
                            || productNum[2] < order.product[i][2] || productNum[3] < order.product[i][3])
                        {
                            order.time[i] = season - 4;
                            if (order.time[i] == 0)
                            {
                                for (int j = 0; j < 4; j++)
                                {
                                    if (order.urgent[i])
                                    {
                                        sum -= order.product[i][j] * productOutPrice[j] * (penaltyRateU[1] / 100);
                                    }
                                    else
                                    {
                                        sum -= order.product[i][j] * productOutPrice[j] * (penaltyRateN[1] / 100);
                                    }
                                }
                            }
                            int c = 0;
                            for (int j = 0; j < 4; j++)
                                c += order.product[i][j] * productOutPrice[j];
                            credit -= log10(pow(3,sqrt(c))) * order.urgent[i]?2:1;
                        }
                        else
                        {
                            int c = 0;
                            for (int j = 0; j < 4; j++)
                            {
                                productNum[j] -= order.product[i][j];
                                sum += order.product[i][j] * productOutPrice[j];
                                c += order.product[i][j] * productOutPrice[j];
                            }
                            credit += log10(pow(3,sqrt(c)-1)) * order.urgent[i] ? 2 : 1;
                        }
                    }
                }
                else
                {
                    order.time[i]++;
                    if (productNum[0] < order.product[i][0] || productNum[1] < order.product[i][1]
                        || productNum[2] < order.product[i][2] || productNum[3] < order.product[i][3])
                    {
                        if(order.time[i] == 0)
                            for (int j = 0; j < 4; j++)
                            {
                                if (order.urgent[i])
                                    sum -= order.product[i][j] * productOutPrice[j] * (penaltyRateU[1] / 100);
                                else
                                    sum -= order.product[i][j] * productOutPrice[j] * (penaltyRateN[1] / 100);
                            }
                    }
                    else
                        for (int j = 0; j < 4; j++)
                            if (order.urgent[i])
                            {
                                productNum[j] -= order.product[i][j];
                                sum += order.product[i][j] * productOutPrice[j] * (1 - penaltyRateU[0] / 100);
                            }
                            else
                            {
                                productNum[j] -= order.product[i][j];
                                sum += order.product[i][j] * productOutPrice[j] * (1 - penaltyRateN[0] / 100);
                            }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 4; j++)
                    orderbuf.product[i][j] = order.product[i][j];
                orderbuf.time[i] = order.time[i];
                orderbuf.urgent[i] = order.urgent[i];
            }
            for (int i = 0, j = 0; i < 10; i++)
            {
                if (orderbuf.time[i] != 0)
                {
                    for (int k = 0; k < 4; k++)
                        orderbuf.product[i][k] = order.product[j][k];
                    order.time[j] = orderbuf.time[i];
                    order.urgent[j] = orderbuf.urgent[i];
                    j++;
                }
                if (i == 9)
                {
                    for (; j < 10; j++)
                    {
                        for (int k = 0; k < 4; k++)
                            order.product[j][k] = 0;
                        order.time[j] = 0;
                        order.urgent[j] = false;
                    }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 4; j++)
                    orderbuf.product[i][j] = 0;
                orderbuf.time[i] = 0;
                orderbuf.urgent[i] = false;
            }
            for (int i = 0; i < 4; i++)
                productDevelopementInvested[i] = false;
            for (int i = 0; i < 5; i++)
                marketDevelopementInvested[i] = false;
            for (int i = 0; i < 2; i++)
                ISOi[i] = false;
            for (int i = 0; i < plantMaximum; i++)
                if (plant.isRented[i] && season == 1)
                    if (plant.isLarge[i])
                        sum -= largePlantRent;
                    else
                        sum -= smallPlantRent;
            for (int i = 0; i < lineMaximumU; i++)
            {
                if(line.lineType[i] != LINETYPE_RENTED)
                    line.seasonRented[i]++;
                if (season == 1 && line.installSeasonLast[i] <= 0 && line.convertingSeasonLast[i] <= 0 && line.own[i])
                {
                    sum -= lineAnnualMaintainCost[line.lineType[i]];
                    line.seasonRented[i]++;
                }
                if (line.productSeasonLast[i] == 1)
                    productNum[line.productType[i]]++;
                if (line.convertingSeasonLast[i] > 0)
                {
                    line.convertingSeasonLast[i]--;
                    sum -= lineConvertingCost[line.lineType[i]];
                }
                if (line.installSeasonLast[i] > 0)
                    line.installSeasonLast[i]--;
                else if (line.productSeasonLast[i] > 0)
                    line.productSeasonLast[i]--;
            }
            if (loanNum != 0)
            {
                for (int i = 0; i < loanNum; i++)
                {
                    loan.seasonR[i]--;
                    if (loan.isLong[i] && season == 1)
                    {
                        sum += ((loan.moneyR[i] * longTermLoanAnnualInterestRate) + (loan.moneyT[i] / loan.yearT[i]));
                        loaned -= loan.moneyT[i] / loan.yearT[i];
                        loan.moneyR[i] -= ((loan.moneyT[i] / loan.yearT[i]));
                        if (loan.seasonR[i] == 0)
                        {
                            sum += loan.moneyR[i];
                            loaned -= loan.moneyR[i];
                        }
                    }
                    if (!loan.isLong[i])
                    {
                        if (loan.seasonR[i] == 0)
                        {
                            if (loan.notLoan[i])
                                sum += loan.moneyT[i];
                            else
                            {
                                sum += loan.moneyT[i] * (shortTermLoanAnnualInterestRate / (4.0 / (double)shortTermLoanLeaseSeason));
                                loaned -= loan.moneyT[i];
                            }
                        }
                    }
                }
                for (int i = 0;i < loanNum; i++)
                {
                    loanbuf.seasonR[i] = loan.seasonR[i];
                    loanbuf.yearT[i] = loan.yearT[i];
                    loanbuf.moneyR[i] = loan.moneyR[i];
                    loanbuf.moneyT[i] = loan.moneyT[i];
                    loanbuf.isLong[i] = loan.isLong[i];
                    loanbuf.notLoan[i] = loan.notLoan[i];
                }
                int count = 0;
                for (int i = 0, j = 0; i < loanNum; i++)
                {
                    if (loanbuf.seasonR[i] > 0)
                    {
                        loan.seasonR[j] = loanbuf.seasonR[i];
                        loan.yearT[j] = loanbuf.yearT[i];
                        loan.moneyR[j] = loanbuf.moneyR[i];
                        loan.moneyT[j] = loanbuf.moneyT[i];
                        loan.isLong[j] = loanbuf.isLong[i];
                        loan.notLoan[j] = loanbuf.notLoan[i];
                        j++;
                    }
                    else
                        count++;
                }
                for (int i = 0; i < loanNum; i++)
                {
                    loanbuf.seasonR[i] = 0;
                    loanbuf.yearT[i] = 0;
                    loanbuf.moneyR[i] = 0;
                    loanbuf.moneyT[i] = 0;
                    loanbuf.isLong[i] = false;
                    loanbuf.notLoan[i] = false;
                }
                loanNum -= count;
                for (int i = loanNum; i < loanNum + count; i++)
                {
                    loan.seasonR[i] = 0;
                    loan.yearT[i] = 0;
                    loan.moneyR[i] = 0;
                    loan.moneyT[i] = 0;
                    loan.isLong[i] = false;
                    loan.notLoan[i] = false;
                }

            }
            if (credit > 5)
                credit = 5;
            sum--;
            if (sum < 0)
            {

                SendMessageW(GetParent(hWndBtn), MSG_FAIL, NULL, NULL);
                break;
            }
            CalculateLoanLimit();
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        }
        break;
        case (int)BTN_SUMUP:
            SendMessageW(GetParent(hWndBtn), MSG_SUMUP, NULL, NULL);
        case (int)BTN_CANCEL:
            SendMessageW(GetParent(hWndBtn), MSG_GAME, NULL, NULL);
        break;
        }
    }
    break;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWndBtn, &ps);
        SetBkMode(hdc, TRANSPARENT);
        SetTextColor(hdc, 0x00000000);
        LPRECT rct = (LPRECT)malloc(sizeof(LPRECT) * 2);
        GetWindowRect(hWndBtn, rct);
        rct->right = rct->right - rct->left;
        rct->left = 0;
        rct->bottom = rct->bottom - rct->top;
        rct->top = 0;
        LPWSTR text = (LPWSTR)malloc(sizeof(LPWSTR) * 10);
        GetWindowTextW(hWndBtn, text, 100);
        DrawTextW(hdc, text, -1, rct, DT_VCENTER | DT_SINGLELINE | DT_CENTER);
        EndPaint(hWndBtn, &ps);
    }
    break;
    default:
        return DefWindowProc(hWndBtn, message, wParam, lParam);
    }
    return 0;
}
void DestroyAllChildWindow(HWND parent, LPCWSTR childclass)
{
    HWND i = FindWindowExW(parent, NULL, childclass, NULL);
    while (i != NULL)
    {
        DestroyWindow(i);
        i = FindWindowExW(parent, NULL, childclass, NULL);
    }
}
void CalculateLoanLimit()
{
    loanLimit = 0;
    loaned = 0;
    for (int i = 0, n = 0; i < loanNum; i++)
    {
        if (!loan.notLoan[i])
        {
            loanLimit += loan.moneyR[i];
            loaned += loan.moneyR[i];
        }
    }
    loanLimit += sum;
    loanLimit *= 3;
    for (int i = 0, n = 0; i < loanNum; i++)
        if (!loan.notLoan[i])
            loaned += loan.moneyR[i];
}

int CalculateShowingArea(int y)
{
    y += 320;
    for (int i = 0; i < plantMaximum; i++)
    {
        y += 20;
        if (plant.isRented[i])
            y += 20;
        if (plant.own[i])
        {
            y += 20;
            for (int j = i * largePlantLineMaximum; j < i * largePlantLineMaximum + (plant.isLarge[i] ? largePlantLineMaximum : smallPlantLineMaximum); j++)
            {
                y += 20;
                if (line.installSeasonLast[j] > 0)
                    y += 20;
                else if (line.convertingSeasonLast[j] > 0)
                    y += 20;
                else if (line.productSeasonLast[j] > 0)
                    y += 20;
                if (line.seasonRented[j] >= 0)
                    y += 20;
            }
        }
    }
    for (int i = 0; i < loanNum; i++)
        y += 20;
    for (int i = 0; order.time[i] != 0 && i < 10; i++)
    {
        y += 60;
        for (int j = 0; j < 4; j++)
        {
            if (order.product[i][j] == 0)
                continue;
            y += 20;
        }
    }
    return y;
}

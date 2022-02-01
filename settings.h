#define COMMON_SAVE_FOLDER      "pfs1:/Your Saves"
#define COMMON_SAVE_FOLDER_MODE 0777
#define TITLE_SAVE_FOLDER       "HDLGAMEINSTALLER"
#define TITLE_SAVE_FOLDER_FULL  COMMON_SAVE_FOLDER "/" TITLE_SAVE_FOLDER
#define TITLE_SAVE_FOLDER_ATTR  0xC4A7
#define TITLE_SAVE_FOLDER_MODE  0777
#define TITLE_SAVE_FILE_ATTR    0x8497
#define TITLE_SAVE_FILE_MODE    0666
#define TITLE_SAVE_MIN_FREE_SPC (40 * 1024)

void LoadDefaults(void);
int ImportIPConfigDat(void);
int LoadSettings(void);
int SaveSettings(void);

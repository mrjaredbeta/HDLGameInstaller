struct BuffDesc
{
    int length;
};

enum IO_THREAD_STATE {
    IO_THREAD_STATE_OK = 0,
    IO_THREAD_STATE_ERROR, // Thread will also no longer receive commands.
};

// IO parameters
#define IO_BANKMAX  32
#define IO_BANKSIZE 2048 // 256 * 2048 (0.5MB) * 32 banks = 16MB total

int IOWriteInit(HANDLE fd, struct BuffDesc *bd, void *buffers, unsigned short int bufmax, unsigned short int nbufs);
int IOReadInit(HANDLE fd, struct BuffDesc *bd, void *buffers, unsigned short int bufmax, unsigned short int nbufs, unsigned int remaining, unsigned char sectorType);
void *IOGetNextWrBuffer(void);
void IOSignalWriteDone(int length);
int IOReadNext(const void **buffer);
void IOReadAdvance(void);
int IORead(void *buffer);
int IOEndWrite(void);
int IOEndRead(void);
int IOGetStatus(void);
int IOAlloc(struct BuffDesc **bdOut, void **ioBufferOut);
void IOFree(struct BuffDesc **bdOut, void **ioBufferOut);

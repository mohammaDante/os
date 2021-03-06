#define NPROC        64  // maximum number of processes
#define KSTACKSIZE 4096  // size of per-process kernel stack
#define NCPU          8  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache
#define FSSIZE       1000  // size of file system in blocks
#define QUANTA	     5	 // Sched Quanta
#define SCHEDFLAG 2 // SchedFlag
#define DEFAULT_PLOICY 0 // Default Policy
#define RR 1 // Round Robin
#define FRR 2 // FIFO Round Robin
#define GRT 3 // Guaranteed (Fair-share) Scheduling
#define Q3 4 // Multi-Level Queue Scheduling
#define HIGH_PRIORITY 3 // High Priority
#define MID_PRIORITY 2 // Mid Priority
#define LOW_PRIORITY 1 // Low Priority


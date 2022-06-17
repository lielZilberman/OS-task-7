// https://www.youtube.com/watch?v=n2AAhiujAqs&t=1255s&ab_channel=drdelhart.

#define BLOCKSIZE 512
struct superblock
{
	int num_inodes;
	int num_blocks;
	int size_blocks;
};

struct inode
{
	int size;
	int first_block;
	char name[8];
};

struct disk_block
{
	int next_block_num;
	char data[BLOCKSIZE];
};

void create_fs();
void mount_fs();
void sync_fs();
int allocate_file(char name[8]);
void set_filesize(int filenum, int size);
void write_byte(int filenum, int pos, char *data);
void print_fs();
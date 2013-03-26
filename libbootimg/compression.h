#ifndef _25aa2a1a_9068_11e2_8847_5404a601fa9d
#define _25aa2a1a_9068_11e2_8847_5404a601fa9d

#define GZIP_DEFLATE_MAGIC "\x1F\x8B\x08"
#define GZIP_DEFLATE_MAGIC_SIZE 3

    long uncompress_gzip_memory(unsigned char* compressed_data , size_t compressed_data_size, 
					unsigned char* uncompressed_data,size_t uncompressed_max_size);
    
    long compress_gzip_memory( unsigned char* uncompressed_data ,size_t uncompressed_data_size,
				unsigned char* compressed_data,size_t compressed_max_size);
#endif
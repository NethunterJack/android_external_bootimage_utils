/*
 * compression.h
 * 
 * Copyright 2013 Trevor Drake <trevd1234@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#ifndef _25aa2a1a_9068_11e2_8847_5404a601fa9d
#define _25aa2a1a_9068_11e2_8847_5404a601fa9d

#define COMPRESSION_GZIP_DEFLATE    1
#define COMPRESSION_LZOP            2
#define COMPRESSION_XZ              3
#define COMPRESSION_LZMA            4
#define COMPRESSION_BZIP2           5
#define COMPRESSION_LZ4             6

unsigned char * find_compressed_data_in_memory( unsigned char *haystack, unsigned haystack_len, int* compression );

unsigned char * find_compressed_data_in_memory_start_at( unsigned char *haystack, unsigned haystack_len,
                unsigned char *haystack_offset, int* compression );

long uncompress_gzip_memory(unsigned char* compressed_data , size_t compressed_data_size, 
                unsigned char* uncompressed_data,size_t uncompressed_max_size);
    
long compress_gzip_memory( unsigned char* uncompressed_data ,size_t uncompressed_data_size,
                unsigned char* compressed_data,size_t compressed_max_size);

long uncompress_lzo_memory(unsigned char* compressed_data , size_t compressed_data_size, 
                unsigned char* uncompressed_data,size_t uncompressed_max_size);

long compress_lzo_memory( unsigned char* uncompressed_data ,size_t uncompressed_data_size,
                unsigned char* compressed_data,size_t compressed_max_size);
                
long uncompress_xz_memory(unsigned char* compressed_data , size_t compressed_data_size, 
                unsigned char* uncompressed_data,size_t uncompressed_max_size);

long compress_xz_memory( unsigned char* uncompressed_data ,size_t uncompressed_data_size,
                unsigned char* compressed_data,size_t compressed_max_size);

#endif

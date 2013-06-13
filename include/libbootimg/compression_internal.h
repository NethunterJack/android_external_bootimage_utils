/*
 * compression_internal.h
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
#ifndef _7b52eb02_d3dc_11e2_a6cb_5404a601fa9d
#define _7b52eb02_d3dc_11e2_a6cb_5404a601fa9d


#include <compression.h>

#define GZIP_DEFLATE_INDEX COMPRESSION_GZIP_DEFLATE
#define GZIP_DEFLATE_NAME "gzip"
#define GZIP_DEFLATE_NAME_SIZE 4
#define GZIP_DEFLATE_MAGIC "\x1F\x8B\x08"
#define GZIP_DEFLATE_MAGIC_SIZE 3

#define LZOP_INDEX COMPRESSION_LZOP
#define LZOP_NAME "lzo"
#define LZOP_NAME_SIZE 3
#define LZOP_MAGIC "\x89\x4C\x5A\x4F" // .LZO
#define LZOP_MAGIC_SIZE 4

#define XZ_INDEX COMPRESSION_XZ
#define XZ_NAME "xz"
#define XZ_NAME_SIZE 2
#define XZ_MAGIC "\xFD\x37\x7A\x58\x5A\x0" // .7zXZ NULL
#define XZ_MAGIC_SIZE 6

#define XZ_FOOTER_MAGIC "\x59\x5A" // YX
#define XZ_FOOTER_MAGIC_SIZE 2

#define XZ_STREAM_FLAGS_SIZE 2


#define LZMA_INDEX COMPRESSION_LZMA
#define LZMA_NAME "lzma"
#define LZMA_NAME_SIZE 4
#define LZMA_MAGIC "\x5D\x00" // ] .NULL 
#define LZMA_MAGIC_SIZE 2

#define BZIP2_INDEX COMPRESSION_BZIP2
#define BZIP2_NAME "bzip2"
#define BZIP2_NAME_SIZE 4
#define BZIP2_MAGIC "\x42\x5A" // BZ 
#define BZIP2_MAGIC_SIZE 2

#define LZ4_INDEX COMPRESSION_LZ4
#define LZ4_NAME "lz4"
#define LZ4_NAME_SIZE 3
#define LZ4_MAGIC "\x02\x21" // .!
#define LZ4_MAGIC_SIZE 2

#define COMPRESSION_INDEX_MAX LZ4_INDEX

typedef struct compression_type compression_type;

static struct compression_type {
    
    unsigned index ;
    char * name ;
    unsigned name_size ;
    char * magic ;
    unsigned magic_size ;
    
} const compression_types[] = { 
    { 0                     ,(char*)NULL        ,0                      ,(char*)NULL        ,0                      },
    { GZIP_DEFLATE_INDEX    ,GZIP_DEFLATE_NAME  ,GZIP_DEFLATE_NAME_SIZE ,GZIP_DEFLATE_MAGIC ,GZIP_DEFLATE_MAGIC_SIZE},
    { LZOP_INDEX            ,LZOP_NAME          ,LZOP_NAME_SIZE         ,LZOP_MAGIC         ,LZOP_MAGIC_SIZE        },
    { XZ_INDEX              ,XZ_NAME            ,XZ_NAME_SIZE           ,XZ_MAGIC           ,XZ_MAGIC_SIZE          },
    { LZMA_INDEX            ,LZMA_NAME          ,LZMA_NAME_SIZE         ,LZMA_MAGIC         ,LZMA_MAGIC_SIZE        },
    { BZIP2_INDEX           ,BZIP2_NAME         ,BZIP2_NAME_SIZE        ,BZIP2_MAGIC        ,BZIP2_MAGIC_SIZE       },
    { LZ4_INDEX             ,LZ4_NAME           ,LZ4_NAME_SIZE          ,LZ4_MAGIC          ,LZ4_MAGIC_SIZE         },
    { 0                     ,NULL               ,0                      ,NULL               ,0                      }
    
};






#endif

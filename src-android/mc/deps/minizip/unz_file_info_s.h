#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minizip/tm_unz_s.h"

struct unz_file_info_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>       version;
    ::ll::TypedStorage<8, 8, ulong>       version_needed;
    ::ll::TypedStorage<8, 8, ulong>       flag;
    ::ll::TypedStorage<8, 8, ulong>       compression_method;
    ::ll::TypedStorage<8, 8, ulong>       dosDate;
    ::ll::TypedStorage<8, 8, ulong>       crc;
    ::ll::TypedStorage<8, 8, ulong>       compressed_size;
    ::ll::TypedStorage<8, 8, ulong>       uncompressed_size;
    ::ll::TypedStorage<8, 8, ulong>       size_filename;
    ::ll::TypedStorage<8, 8, ulong>       size_file_extra;
    ::ll::TypedStorage<8, 8, ulong>       size_file_comment;
    ::ll::TypedStorage<8, 8, ulong>       disk_num_start;
    ::ll::TypedStorage<8, 8, ulong>       internal_fa;
    ::ll::TypedStorage<8, 8, ulong>       external_fa;
    ::ll::TypedStorage<4, 24, ::tm_unz_s> tmu_date;
    // NOLINTEND
};

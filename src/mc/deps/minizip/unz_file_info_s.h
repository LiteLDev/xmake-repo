#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minizip/tm_unz_s.h"
#else // @header-generator platform
#endif // @header-generator platform

struct unz_file_info_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkfad684;
    ::ll::UntypedStorage<4, 4>  mUnk3affb2;
    ::ll::UntypedStorage<4, 4>  mUnkf1d8a9;
    ::ll::UntypedStorage<4, 4>  mUnk8774de;
    ::ll::UntypedStorage<4, 4>  mUnk330b33;
    ::ll::UntypedStorage<4, 4>  mUnkeea54d;
    ::ll::UntypedStorage<4, 4>  mUnkfd95d0;
    ::ll::UntypedStorage<4, 4>  mUnk1ef2cc;
    ::ll::UntypedStorage<4, 4>  mUnk26873a;
    ::ll::UntypedStorage<4, 4>  mUnk8a3a5e;
    ::ll::UntypedStorage<4, 4>  mUnk8d3438;
    ::ll::UntypedStorage<4, 4>  mUnk63e298;
    ::ll::UntypedStorage<4, 4>  mUnk47c101;
    ::ll::UntypedStorage<4, 4>  mUnk7d7496;
    ::ll::UntypedStorage<4, 24> mUnk7c3690;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    unz_file_info_s& operator=(unz_file_info_s const&);
    unz_file_info_s(unz_file_info_s const&);
    unz_file_info_s();
#endif // @header-generator platform
};

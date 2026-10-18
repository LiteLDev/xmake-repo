#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minizip/tm_unz_s.h"
#else // @header-generator platform
#endif // @header-generator platform

struct unz_file_info64_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>              version;
    ::ll::TypedStorage<8, 8, ulong>              version_needed;
    ::ll::TypedStorage<8, 8, ulong>              flag;
    ::ll::TypedStorage<8, 8, ulong>              compression_method;
    ::ll::TypedStorage<8, 8, ulong>              dosDate;
    ::ll::TypedStorage<8, 8, ulong>              crc;
    ::ll::TypedStorage<8, 8, unsigned long long> compressed_size;
    ::ll::TypedStorage<8, 8, unsigned long long> uncompressed_size;
    ::ll::TypedStorage<8, 8, ulong>              size_filename;
    ::ll::TypedStorage<8, 8, ulong>              size_file_extra;
    ::ll::TypedStorage<8, 8, ulong>              size_file_comment;
    ::ll::TypedStorage<8, 8, ulong>              disk_num_start;
    ::ll::TypedStorage<8, 8, ulong>              internal_fa;
    ::ll::TypedStorage<8, 8, ulong>              external_fa;
    ::ll::TypedStorage<4, 24, ::tm_unz_s>        tmu_date;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkf6bb41;
    ::ll::UntypedStorage<4, 4>  mUnk1335d8;
    ::ll::UntypedStorage<4, 4>  mUnkbbf26c;
    ::ll::UntypedStorage<4, 4>  mUnk92dec3;
    ::ll::UntypedStorage<4, 4>  mUnkce37e5;
    ::ll::UntypedStorage<4, 4>  mUnk515e7e;
    ::ll::UntypedStorage<8, 8>  mUnkaf07f1;
    ::ll::UntypedStorage<8, 8>  mUnk549042;
    ::ll::UntypedStorage<4, 4>  mUnk287a6c;
    ::ll::UntypedStorage<4, 4>  mUnkb84f74;
    ::ll::UntypedStorage<4, 4>  mUnk708cea;
    ::ll::UntypedStorage<4, 4>  mUnkffa6e9;
    ::ll::UntypedStorage<4, 4>  mUnk9766c3;
    ::ll::UntypedStorage<4, 4>  mUnk8ee8a8;
    ::ll::UntypedStorage<4, 24> mUnkd734b9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    unz_file_info64_s& operator=(unz_file_info64_s const&);
    unz_file_info64_s(unz_file_info64_s const&);
    unz_file_info64_s();
#endif // @header-generator platform
};

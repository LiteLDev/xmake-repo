#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/flattening_utils/BlockNameRefAuxVariant.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { struct BlockNameRefAuxVariant; }
// clang-format on
#endif // @header-generator platform

namespace FlatteningUtils {

struct LegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                      legacyId;
    ::ll::TypedStorage<8, 40, ::HashedString>                                          legacyFullName;
    ::ll::TypedStorage<8, 40, ::HashedString>                                          legacyRawName;
    ::ll::TypedStorage<1, 1, uchar>                                                    maxAuxValue;
    ::ll::TypedStorage<4, 4, int>                                                      startVariant;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> newBlockFullNamesByAux;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> newBlockFullNamesByVariant;
    ::ll::TypedStorage<8, 24, std::vector<FlatteningUtils::BlockNameRefAuxVariant>>    newBlockNameAuxVariants;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                            legacyId;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                legacyFullName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                legacyRawName;
    ::ll::TypedStorage<1, 1, uchar>                                                          maxAuxValue;
    ::ll::TypedStorage<4, 4, int>                                                            startVariant;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> newBlockFullNamesByAux;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> newBlockFullNamesByVariant;
    ::ll::TypedStorage<8, 24, ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant>>      newBlockNameAuxVariants;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyBlockInfo(
        int,
        ::HashedString,
        ::HashedString,
        uchar,
        std::vector<FlatteningUtils::BlockNameRefAuxVariant>,
        int
#else // @header-generator platform
    MCAPI LegacyBlockInfo(
        int                                                      legacyId_,
        ::HashedString                                           legacyFullName_,
        ::HashedString                                           legacyRawName_,
        uchar                                                    maxAuxValue_,
        ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_,
        int                                                      startVariant
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~LegacyBlockInfo();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(int, ::HashedString, ::HashedString, uchar, std::vector<FlatteningUtils::BlockNameRefAuxVariant>, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        int                                                      legacyId_,
        ::HashedString                                           legacyFullName_,
        ::HashedString                                           legacyRawName_,
        uchar                                                    maxAuxValue_,
        ::std::vector<::FlatteningUtils::BlockNameRefAuxVariant> newBlockNameAuxVariants_,
        int                                                      startVariant
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FlatteningUtils

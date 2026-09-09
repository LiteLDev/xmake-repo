#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/flattening_utils/BlockNameRefAuxVariant.h"

namespace FlatteningUtils {

struct LegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                      legacyId;
    ::ll::TypedStorage<8, 40, ::HashedString>                                          legacyFullName;
    ::ll::TypedStorage<8, 40, ::HashedString>                                          legacyRawName;
    ::ll::TypedStorage<1, 1, uchar>                                                    maxAuxValue;
    ::ll::TypedStorage<4, 4, int>                                                      startVariant;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> newBlockFullNamesByAux;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> newBlockFullNamesByVariant;
    ::ll::TypedStorage<8, 24, std::vector<FlatteningUtils::BlockNameRefAuxVariant>>    newBlockNameAuxVariants;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyBlockInfo(
        int,
        ::HashedString,
        ::HashedString,
        uchar,
        std::vector<FlatteningUtils::BlockNameRefAuxVariant>,
        int
    );

    MCNAPI ~LegacyBlockInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(int, ::HashedString, ::HashedString, uchar, std::vector<FlatteningUtils::BlockNameRefAuxVariant>, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FlatteningUtils

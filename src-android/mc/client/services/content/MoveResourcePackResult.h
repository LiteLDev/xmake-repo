#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/client/services/content/AddDependenciesResult.h"
#include "mc/client/services/content/MoveResourceError.h"
#include "mc/client/services/content/PackMoveResult.h"
#include "mc/resources/ContentTierIncompatibleReason.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
// clang-format on

struct MoveResourcePackResult {
public:
    // MoveResourcePackResult inner types define
    using PackContentItemPtr = std::shared_ptr<const PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::PackMoveResult>                                    mPackMoveResult;
    ::ll::TypedStorage<4, 4, ::MoveResourceError>                                  mError;
    ::ll::UntypedStorage<4, 0>                                                     mContentTierIncompatibleReason;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const PackContentItem>>> mContentToMove;
    ::ll::TypedStorage<4, 4, ::PackListType>                                       mToPackList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PackContentItem>>              mDataErrorPackContentItem;
    ::ll::TypedStorage<4, 8, ::AddDependenciesResult>                              mAddDepsResult;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PackContentItem>>              mAddDependenciesPackContentItem;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveResourcePackResult& operator=(MoveResourcePackResult const&);
    MoveResourcePackResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveResourcePackResult(::MoveResourcePackResult const&);

    MCNAPI MoveResourcePackResult(
        std::vector<std::shared_ptr<const PackContentItem>>,
        ::PackListType,
        std::shared_ptr<const PackContentItem>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MoveResourcePackResult const&);

    MCNAPI void* $ctor(
        std::vector<std::shared_ptr<const PackContentItem>>,
        ::PackListType,
        std::shared_ptr<const PackContentItem>
    );
    // NOLINTEND
};

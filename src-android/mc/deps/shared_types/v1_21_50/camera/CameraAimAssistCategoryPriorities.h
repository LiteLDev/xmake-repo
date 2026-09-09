#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoryPriorities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                     mEntities;
    ::ll::UntypedStorage<8, 40>                                     mBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockTags;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityTypeFamilies;
    ::ll::TypedStorage<4, 8, std::optional<int>>                    mEntityDefault;
    ::ll::TypedStorage<4, 8, std::optional<int>>                    mBlockDefault;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistCategoryPriorities(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&) const;

    MCNAPI ~CameraAimAssistCategoryPriorities();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                     mEntities;
    ::ll::UntypedStorage<8, 40>                                     mBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockTags;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityTypeFamilies;
    ::ll::TypedStorage<4, 8, std::optional<int>>                    mEntityDefault;
    ::ll::TypedStorage<4, 8, std::optional<int>>                    mBlockDefault;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<1>, int>> mEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<0>, int>> mBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>               mBlockTags;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>               mEntityTypeFamilies;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mEntityDefault;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mBlockDefault;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistCategoryPriorities(CameraAimAssistCategoryPriorities const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAimAssistCategoryPriorities(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);
#else // @header-generator platform
    MCAPI CameraAimAssistCategoryPriorities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CameraAimAssistCategoryPriorities();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);

    MCAPI ~CameraAimAssistCategoryPriorities();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50

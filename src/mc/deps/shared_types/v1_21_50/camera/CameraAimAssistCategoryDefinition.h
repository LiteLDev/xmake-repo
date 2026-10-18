#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryPriorities.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoryDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                            mName;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities> mPriorities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<6>>                                mName;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities> mPriorities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistCategoryDefinition& operator=(CameraAimAssistCategoryDefinition const&);
    CameraAimAssistCategoryDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAimAssistCategoryDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&);
#else // @header-generator platform
    MCAPI CameraAimAssistCategoryDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CameraAimAssistCategoryDefinition();
#else // @header-generator platform
    MCAPI CameraAimAssistCategoryDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const& rhs) const;

    MCAPI ~CameraAimAssistCategoryDefinition();
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&);
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

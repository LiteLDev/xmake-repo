#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetExclusionDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                                   mIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<5>>                                       mIdentifier;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition> mExclusionSettings;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                                   mLiquidTargetingList;
    ::ll::UntypedStorage<8, 40>                                                                   mItemSettings;
    ::ll::UntypedStorage<8, 32>                                                                   mDefaultItemSettings;
    ::ll::UntypedStorage<8, 32>                                                                   mHandSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<10>>>                        mLiquidTargetingList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<10>, ::SharedTypes::Reference<6>>>
                                                                            mItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mHandSettings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistPresetDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);
#else // @header-generator platform
    MCAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&);
#else // @header-generator platform
    MCAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CameraAimAssistPresetDefinition();
#else // @header-generator platform
    MCAPI ~CameraAimAssistPresetDefinition();
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&);
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

} // namespace SharedTypes::v1_21_120

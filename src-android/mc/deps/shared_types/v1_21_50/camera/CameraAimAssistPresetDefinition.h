#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mIdentifier;
    ::ll::UntypedStorage<8, 24> mExclusionList;
    ::ll::UntypedStorage<8, 24> mLiquidTargetingList;
    ::ll::UntypedStorage<8, 40> mItemSettings;
    ::ll::UntypedStorage<8, 32> mDefaultItemSettings;
    ::ll::UntypedStorage<8, 32> mHandSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI ~CameraAimAssistPresetDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50

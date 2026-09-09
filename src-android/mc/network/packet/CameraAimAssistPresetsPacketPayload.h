#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetDefinition.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryDefinition.h"
#include "mc/network/packet/CameraAimAssistPresetsPacketOperation.h"

struct CameraAimAssistPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>>  mPresets;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPresetsPacketOperation>                                mOperation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAimAssistPresetsPacketPayload& operator=(::CameraAimAssistPresetsPacketPayload&&);
    // NOLINTEND
};

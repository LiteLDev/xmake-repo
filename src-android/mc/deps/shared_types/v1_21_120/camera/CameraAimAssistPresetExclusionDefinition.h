#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct CameraAimAssistPresetExclusionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mBlockExclusionList;
    ::ll::UntypedStorage<8, 24>                         mActorExclusionList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBlockTagExclusionList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEntityTypeFamilyExclusionList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    CameraAimAssistPresetExclusionDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);

    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&) const;

    MCNAPI ~CameraAimAssistPresetExclusionDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120

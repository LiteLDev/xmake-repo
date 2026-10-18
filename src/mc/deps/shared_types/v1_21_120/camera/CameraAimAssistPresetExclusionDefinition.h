#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_120 {

struct CameraAimAssistPresetExclusionDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                         mBlockExclusionList;
    ::ll::UntypedStorage<8, 24>                         mActorExclusionList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBlockTagExclusionList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEntityTypeFamilyExclusionList;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<0>>> mBlockExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<1>>> mActorExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mBlockTagExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mEntityTypeFamilyExclusionList;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistPresetExclusionDefinition& operator=(CameraAimAssistPresetExclusionDefinition const&);
    CameraAimAssistPresetExclusionDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
#else // @header-generator platform
    MCAPI
#endif // @header-generator platform
    CameraAimAssistPresetExclusionDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&&);
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&) const;

    MCNAPI ~CameraAimAssistPresetExclusionDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~CameraAimAssistPresetExclusionDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);
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

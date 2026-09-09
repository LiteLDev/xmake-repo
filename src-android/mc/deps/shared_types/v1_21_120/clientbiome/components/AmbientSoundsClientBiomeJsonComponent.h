#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AmbientSoundsClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // AmbientSoundsClientBiomeJsonComponent inner types declare
    // clang-format off
    struct SoundAddition;
    // clang-format on

    // AmbientSoundsClientBiomeJsonComponent inner types define
    struct SoundAddition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>     mAsset;
        ::ll::TypedStorage<4, 4, float> mChance;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mAddition;
    ::ll::UntypedStorage<8, 24> mLoop;
    ::ll::UntypedStorage<8, 24> mMood;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mUnderwaterAddition;
    ::ll::UntypedStorage<8, 24> mUnderwaterLoop;
    ::ll::UntypedStorage<8, 24> mUnderwaterMood;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AmbientSoundsClientBiomeJsonComponent();

    virtual ::ClientBiomeComponentVersion getType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBiomeComponentVersion $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120

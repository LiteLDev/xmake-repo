#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>     mAsset;
        ::ll::TypedStorage<4, 4, float> mChance;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mAsset;
        ::ll::TypedStorage<4, 4, float>                         mChance;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // static functions
#else // @header-generator platform
        // member functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        MCAPI ~SoundAddition();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mAddition;
    ::ll::UntypedStorage<8, 24> mLoop;
    ::ll::UntypedStorage<8, 24> mMood;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mUnderwaterAddition;
    ::ll::UntypedStorage<8, 24> mUnderwaterLoop;
    ::ll::UntypedStorage<8, 24> mUnderwaterMood;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mMood;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition>
                                                            mUnderwaterAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterMood;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AmbientSoundsClientBiomeJsonComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AmbientSoundsClientBiomeJsonComponent();
#else // @header-generator platform
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ClientBiomeComponentVersion getType() const;
#else // @header-generator platform
    virtual ~AmbientSoundsClientBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientSoundsClientBiomeJsonComponent(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&&);

    MCAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
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
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientBiomeComponentVersion $getType() const;
#else // @header-generator platform
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120

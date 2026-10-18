#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct ReplaceBiomesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // ReplaceBiomesBiomeJsonComponent inner types declare
    // clang-format off
    struct BiomeReplacement;
    // clang-format on

    // ReplaceBiomesBiomeJsonComponent inner types define
    struct BiomeReplacement {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mDimension;
        ::ll::UntypedStorage<8, 24>            mTargetBiomes;
        ::ll::TypedStorage<4, 4, float>        mAmount;
        ::ll::TypedStorage<4, 4, float>        mNoiseFrequencyScale;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                              mDimension;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<3>>> mTargetBiomes;
        ::ll::TypedStorage<4, 4, float>                                       mAmount;
        ::ll::TypedStorage<4, 4, float>                                       mNoiseFrequencyScale;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        BiomeReplacement& operator=(BiomeReplacement const&);
        BiomeReplacement();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement const&) const;
#else // @header-generator platform
        MCAPI BiomeReplacement(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~BiomeReplacement();
#else // @header-generator platform
        MCAPI bool operator==(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement const&) const;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void* $ctor(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement const&);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement>> mBiomeReplacements;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReplaceBiomesBiomeJsonComponent();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement>>
        mBiomeReplacements;
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

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80

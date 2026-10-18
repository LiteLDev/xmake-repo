#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackLoadRequirement.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/Factory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/traits/block_trait/ITrait.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PackLoadRequirement;
namespace BlockTrait { class ITrait; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class BlockTraitFactory : public ::Factory<BlockTrait::ITrait> {
#else // @header-generator platform
class BlockTraitFactory : public ::Factory<::BlockTrait::ITrait> {
#endif // @header-generator platform
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct TraitMetadata;
    // clang-format on

    // BlockTraitFactory inner types define
    struct TraitMetadata {
    public:
        // TraitMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        using Ctor = std::unique_ptr<BlockTrait::ITrait> (*)();
#else // @header-generator platform
        using Ctor = ::std::unique_ptr<::BlockTrait::ITrait> (*)();
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTrait::ITrait> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, std::vector<PackLoadRequirement>>         requirements;
        ::ll::UntypedStorage<8, 32>                                         releasedMinFormatVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TraitMetadata(::BlockTraitFactory::TraitMetadata const&);

        MCNAPI ~TraitMetadata();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BlockTraitFactory::TraitMetadata const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTrait::ITrait> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>         requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>                releasedMinFormatVersion;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using RegisteredTraitsMap = std::unordered_map<std::string, BlockTraitFactory::TraitMetadata>;
#else // @header-generator platform
    using RegisteredTraitsMap = ::std::unordered_map<::std::string, ::BlockTraitFactory::TraitMetadata>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BlockTraitFactory::TraitMetadata>> mRegisteredTraits;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::BlockTraitFactory::TraitMetadata>>
        mRegisteredTraits;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockTrait::ITrait> createTrait(std::string const&, ::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockTrait::ITrait>
    createTrait(::std::string const& name, ::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockTraitFactory();
#else // @header-generator platform
    MCAPI ~BlockTraitFactory();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerAllTraits(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void registerAllTraits(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, BlockTraitFactory::TraitMetadata> const*
    registeredTraits(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::BlockTraitFactory::TraitMetadata> const*
    registeredTraits(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockTraitFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static ::BlockTraitFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);
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

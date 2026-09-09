#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/PackLoadRequirement.h"
#include "mc/util/Factory.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockTraitFactory : public ::Factory<BlockTrait::ITrait> {
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct TraitMetadata;
    // clang-format on

    // BlockTraitFactory inner types define
    struct TraitMetadata {
    public:
        // TraitMetadata inner types define
        using Ctor = std::unique_ptr<BlockTrait::ITrait> (*)();

    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    using RegisteredTraitsMap = std::unordered_map<std::string, BlockTraitFactory::TraitMetadata>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BlockTraitFactory::TraitMetadata>> mRegisteredTraits;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<BlockTrait::ITrait> createTrait(std::string const&, ::cereal::ReflectionCtx const&) const;

    MCNAPI ~BlockTraitFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerAllTraits(::cereal::ReflectionCtx&);

    MCNAPI static std::unordered_map<std::string, BlockTraitFactory::TraitMetadata> const*
    registeredTraits(::cereal::ReflectionCtx const&);

    MCNAPI static ::BlockTraitFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

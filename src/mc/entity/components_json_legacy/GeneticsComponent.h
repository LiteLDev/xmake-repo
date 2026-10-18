#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class GeneticsDefinition;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
struct GeneDefinition;
struct GeneticVariant;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GeneticsComponent {
public:
    // GeneticsComponent inner types declare
    // clang-format off
    struct Gene;
    // clang-format on

    // GeneticsComponent inner types define
    struct Gene {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mainAllele;
        ::ll::TypedStorage<4, 4, int> hiddenAllele;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GeneticsComponent::Gene>> mGenes;
    ::ll::TypedStorage<8, 8, ::GeneticsDefinition const*>           mGeneticsDescription;
    ::ll::TypedStorage<8, 8, ::Random*>                             mRandom;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneticsComponent::Gene>> mGenes;
    ::ll::TypedStorage<8, 8, ::GeneticsDefinition const*>               mGeneticsDescription;
    ::ll::TypedStorage<8, 8, ::Random*>                                 mRandom;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GeneticsComponent& operator=(GeneticsComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _createRandomAllele(::GeneDefinition const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void buildDebugInfo(::std::string& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void buildDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void fireGeneEvents(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireGeneEvents(::Actor&) const;
#else // @header-generator platform
    MCAPI void initializeGenesFromParents(::Actor& owner, ::Actor& parentalUnit1, ::Actor& parentalUnit2);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeGenesFromParents(::Actor&, ::Actor&, ::Actor&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& GENE_ARRAY();
#else // @header-generator platform
    MCAPI static ::std::string const& GENE_ARRAY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& HIDDEN_ALLELE();
#else // @header-generator platform
    MCAPI static ::std::string const& HIDDEN_ALLELE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& INVALID_ALLELE_VALUE();

    MCNAPI static std::string const& MAIN_ALLELE();
#else // @header-generator platform
    MCAPI static ::std::string const& MAIN_ALLELE();
#endif // @header-generator platform
    // NOLINTEND
};

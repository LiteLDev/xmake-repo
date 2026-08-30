#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class GeneticsDefinition;
class Random;
struct GeneDefinition;
struct GeneticVariant;
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
    ::ll::TypedStorage<8, 24, std::vector<GeneticsComponent::Gene>> mGenes;
    ::ll::TypedStorage<8, 8, ::GeneticsDefinition const*>           mGeneticsDescription;
    ::ll::TypedStorage<8, 8, ::Random*>                             mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneticsComponent& operator=(GeneticsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _createRandomAllele(::GeneDefinition const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void buildDebugInfo(std::string&) const;

    MCNAPI void fireGeneEvents(::Actor&) const;

    MCNAPI void initializeGenesFromParents(::Actor&, ::Actor&, ::Actor&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& GENE_ARRAY();

    MCNAPI static std::string const& HIDDEN_ALLELE();

    MCNAPI static int const& INVALID_ALLELE_VALUE();

    MCNAPI static std::string const& MAIN_ALLELE();
    // NOLINTEND
};

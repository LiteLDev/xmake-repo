#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/IntRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OffspringDefinition {
public:
    // OffspringDefinition inner types declare
    // clang-format off
    struct MutationFactorData;
    struct DenySameParentsVariantData;
    struct PropertyGeneticData;
    // clang-format on

    // OffspringDefinition inner types define
    enum class MutationStrategy : uchar {
        None   = 0,
        Random = 1,
    };

    struct MutationFactorData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mVariant;
        ::ll::TypedStorage<4, 4, float> mExtraVariant;
        ::ll::TypedStorage<4, 4, float> mColor;
        // NOLINTEND
    };

    struct DenySameParentsVariantData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mChance;
        ::ll::TypedStorage<4, 4, int>   mVariantRangeMin;
        ::ll::TypedStorage<4, 4, int>   mVariantRangeMax;
        // NOLINTEND
    };

    struct PropertyGeneticData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                                     mMutationChance;
        ::ll::TypedStorage<8, 24, std::vector<std::variant<int, float, bool, std::string>>> mMutationValues;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyGeneticData& operator=(PropertyGeneticData const&);
        PropertyGeneticData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PropertyGeneticData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                  mMateAndBaby;
    ::ll::UntypedStorage<8, 24>                                                  mParentCentricAttributeBlending;
    ::ll::TypedStorage<4, 12, ::OffspringDefinition::MutationFactorData>         mMutationFactors;
    ::ll::TypedStorage<1, 1, ::OffspringDefinition::MutationStrategy>            mMutationStrategy;
    ::ll::TypedStorage<1, 1, bool>                                               mBlendAttributes;
    ::ll::TypedStorage<1, 1, bool>                                               mInheritTamed;
    ::ll::TypedStorage<1, 1, bool>                                               mCombineParentColors;
    ::ll::TypedStorage<4, 8, ::IntRange>                                         mRandomVariantMutationInterval;
    ::ll::TypedStorage<4, 8, ::IntRange>                                         mRandomExtraVariantMutationInterval;
    ::ll::TypedStorage<4, 12, ::OffspringDefinition::DenySameParentsVariantData> mDenyParentsVariant;
    ::ll::UntypedStorage<8, 48>                                                  mGeneticProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OffspringDefinition();

    MCNAPI void setMutationStrategy(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, OffspringDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

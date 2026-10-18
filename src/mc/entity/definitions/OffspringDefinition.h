#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/IntRange.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OffspringDefinition {
public:
    // OffspringDefinition inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct MutationFactorData;
#else // @header-generator platform
#endif // @header-generator platform
    struct DenySameParentsVariantData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MutationFactorData;
#endif // @header-generator platform
    struct PropertyGeneticData;
    // clang-format on

    // OffspringDefinition inner types define
    enum class MutationStrategy : uchar {
        None   = 0,
        Random = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct MutationFactorData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mVariant;
        ::ll::TypedStorage<4, 4, float> mExtraVariant;
        ::ll::TypedStorage<4, 4, float> mColor;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct DenySameParentsVariantData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float> mChance;
        ::ll::TypedStorage<4, 4, int>   mVariantRangeMin;
        ::ll::TypedStorage<4, 4, int>   mVariantRangeMax;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk7bf2fe;
        ::ll::UntypedStorage<4, 4> mUnk1fa856;
        ::ll::UntypedStorage<4, 4> mUnk7fc226;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DenySameParentsVariantData& operator=(DenySameParentsVariantData const&);
        DenySameParentsVariantData(DenySameParentsVariantData const&);
        DenySameParentsVariantData();
    };

    struct MutationFactorData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf85d00;
        ::ll::UntypedStorage<4, 4> mUnk62896f;
        ::ll::UntypedStorage<4, 4> mUnk6b7966;
        // NOLINTEND

    public:
        // prevent constructor by default
        MutationFactorData& operator=(MutationFactorData const&);
        MutationFactorData(MutationFactorData const&);
        MutationFactorData();
#endif // @header-generator platform
    };

    struct PropertyGeneticData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                                                     mMutationChance;
        ::ll::TypedStorage<8, 24, std::vector<std::variant<int, float, bool, std::string>>> mMutationValues;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnk280129;
        ::ll::UntypedStorage<8, 24> mUnk658c82;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyGeneticData& operator=(PropertyGeneticData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PropertyGeneticData(PropertyGeneticData const&);
#endif // @header-generator platform
        PropertyGeneticData();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk79e8e2;
    ::ll::UntypedStorage<8, 24> mUnk6d3ac1;
    ::ll::UntypedStorage<4, 12> mUnk7463c1;
    ::ll::UntypedStorage<1, 1>  mUnkf81be6;
    ::ll::UntypedStorage<1, 1>  mUnk7aa83f;
    ::ll::UntypedStorage<1, 1>  mUnkd8a6a4;
    ::ll::UntypedStorage<1, 1>  mUnk1af3aa;
    ::ll::UntypedStorage<4, 8>  mUnk6ec631;
    ::ll::UntypedStorage<4, 8>  mUnk9a0fe1;
    ::ll::UntypedStorage<4, 12> mUnkf2d366;
    ::ll::UntypedStorage<8, 48> mUnk57c934;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OffspringDefinition& operator=(OffspringDefinition const&);
    OffspringDefinition(OffspringDefinition const&);
    OffspringDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OffspringDefinition();

    MCNAPI void setMutationStrategy(std::string const&);
#else // @header-generator platform
    MCAPI void setMutationStrategy(::std::string const& strategy);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, OffspringDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OffspringDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};

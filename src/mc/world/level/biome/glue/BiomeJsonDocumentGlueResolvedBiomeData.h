#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IBiomeComponentGlue;
struct IBiomeEnvironmentAttributeGlue;
// clang-format on

struct BiomeJsonDocumentGlueResolvedBiomeData {
public:
    // BiomeJsonDocumentGlueResolvedBiomeData inner types declare
    // clang-format off
    struct ResolvedComponent;
    struct ResolvedEnvironmentAttribute;
    // clang-format on

    // BiomeJsonDocumentGlueResolvedBiomeData inner types define
    struct ResolvedComponent {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IBiomeComponentGlue>>> mComponentGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                      mJsonComponent;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedComponent& operator=(ResolvedComponent const&);
        ResolvedComponent(ResolvedComponent const&);
        ResolvedComponent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResolvedComponent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeComponentGlue>>> mComponentGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                          mJsonComponent;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ResolvedEnvironmentAttribute {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                                      mAttributeName;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IBiomeEnvironmentAttributeGlue>>> mAttributeGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                                 mJsonAttribute;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedEnvironmentAttribute& operator=(ResolvedEnvironmentAttribute const&);
        ResolvedEnvironmentAttribute(ResolvedEnvironmentAttribute const&);
        ResolvedEnvironmentAttribute();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResolvedEnvironmentAttribute();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                                                        mAttributeName;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeEnvironmentAttributeGlue>>> mAttributeGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                                     mJsonAttribute;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<BiomeJsonDocumentGlueResolvedBiomeData::ResolvedComponent>> mResolvedComponents;
    ::ll::TypedStorage<8, 24, std::vector<BiomeJsonDocumentGlueResolvedBiomeData::ResolvedEnvironmentAttribute>> mResolvedEnvironmentAttributes;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentGlueResolvedBiomeData& operator=(BiomeJsonDocumentGlueResolvedBiomeData const&);
    BiomeJsonDocumentGlueResolvedBiomeData(BiomeJsonDocumentGlueResolvedBiomeData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeJsonDocumentGlueResolvedBiomeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlueResolvedBiomeData::ResolvedComponent>>
        mResolvedComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlueResolvedBiomeData::ResolvedEnvironmentAttribute>>
        mResolvedEnvironmentAttributes;
#endif // @header-generator platform
    // NOLINTEND
};

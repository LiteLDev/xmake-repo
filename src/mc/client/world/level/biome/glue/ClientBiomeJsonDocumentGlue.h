#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
struct IBiomeEnvironmentAttributeGlue;
struct IClientBiomeComponentGlue;
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ClientBiomeJsonDocumentGlue {
public:
    // ClientBiomeJsonDocumentGlue inner types declare
    // clang-format off
    struct ResolvedClientBiomeData;
    // clang-format on

    // ClientBiomeJsonDocumentGlue inner types define
    struct ResolvedClientBiomeData {
    public:
        // ResolvedClientBiomeData inner types declare
        // clang-format off
        struct ResolvedComponent;
        struct ResolvedEnvironmentAttribute;
        // clang-format on

        // ResolvedClientBiomeData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct ResolvedComponent {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IClientBiomeComponentGlue>>> mComponentGlue;
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<SharedTypes::v1_21_40::IClientBiomeJsonComponent>>> mJsonComponent;
            // clang-format on
            // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct ResolvedComponent {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk5c0d4b;
            ::ll::UntypedStorage<8, 16> mUnk2afd7a;
            // NOLINTEND
#else // @header-generator platform
        struct ResolvedComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
            // NOLINTEND
        };

        struct ResolvedEnvironmentAttribute {
        public:
            // member variables
            // NOLINTBEGIN
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
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<ClientBiomeJsonDocumentGlue::ResolvedClientBiomeData::ResolvedComponent>> mResolvedComponents;
        ::ll::TypedStorage<8, 24, std::vector<ClientBiomeJsonDocumentGlue::ResolvedClientBiomeData::ResolvedEnvironmentAttribute>> mResolvedEnvironmentAttributes;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedClientBiomeData& operator=(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData(ResolvedClientBiomeData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResolvedClientBiomeData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        public:
            // prevent constructor by default
            ResolvedComponent& operator=(ResolvedComponent const&);
            ResolvedComponent(ResolvedComponent const&);
            ResolvedComponent();
        };

        struct ResolvedEnvironmentAttribute {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk566e95;
            ::ll::UntypedStorage<8, 16> mUnkae4184;
            ::ll::UntypedStorage<8, 64> mUnk8ac22e;
            // NOLINTEND

        public:
            // prevent constructor by default
            ResolvedEnvironmentAttribute& operator=(ResolvedEnvironmentAttribute const&);
            ResolvedEnvironmentAttribute(ResolvedEnvironmentAttribute const&);
            ResolvedEnvironmentAttribute();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkfe04c5;
        ::ll::UntypedStorage<8, 24> mUnk4a3f30;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedClientBiomeData& operator=(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData();
#else // @header-generator platform
        struct ResolvedEnvironmentAttribute {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IClientBiomeComponentGlue> ()>>> mComponentGlueFactories;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IBiomeEnvironmentAttributeGlue> ()>>> mEnvironmentAttributeGlueFactories;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientBiomeJsonDocumentGlue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfbd184;
    ::ll::UntypedStorage<8, 16> mUnkadf5b0;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocumentGlue& operator=(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue();
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

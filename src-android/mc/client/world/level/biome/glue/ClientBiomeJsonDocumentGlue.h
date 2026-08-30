#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct IBiomeEnvironmentAttributeGlue;
struct IClientBiomeComponentGlue;
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on

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
        struct ResolvedComponent {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IClientBiomeComponentGlue>>> mComponentGlue;
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<SharedTypes::v1_21_40::IClientBiomeJsonComponent>>> mJsonComponent;
            // clang-format on
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
    };

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
};

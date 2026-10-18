#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/puv/ParserBase.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
namespace Puv { class VersionRange; }
// clang-format on

class FeatureParser : public ::Puv::ParserBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::FeatureParserContext&> mContext;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>> const&> mSchema;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>> const&>
        mSchema;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParser& operator=(FeatureParser const&);
    FeatureParser(FeatureParser const&);
    FeatureParser();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FeatureParser();

    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&, ::cereal::ContextArea) const;
#else // @header-generator platform
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const& input, ::cereal::ContextArea contextArea) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI FeatureParser(
        ::Puv::VersionRange     versionRange,
        ::FeatureParserContext& context,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>> const&
            schema
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Puv::VersionRange     versionRange,
        ::FeatureParserContext& context,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>> const&
            schema
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::LoadResultAny $doParse(::Puv::Input const&, ::cereal::ContextArea) const;
#else // @header-generator platform
    MCAPI ::Puv::LoadResultAny $doParse(::Puv::Input const& input, ::cereal::ContextArea contextArea) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

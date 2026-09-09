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
    // clang-format off
    ::ll::TypedStorage<8, 8, ::FeatureParserContext&> mContext;
    ::ll::TypedStorage<8, 8, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>> const&> mSchema;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParser& operator=(FeatureParser const&);
    FeatureParser(FeatureParser const&);
    FeatureParser();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureParser();

    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&, ::cereal::ContextArea) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::LoadResultAny $doParse(::Puv::Input const&, ::cereal::ContextArea) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

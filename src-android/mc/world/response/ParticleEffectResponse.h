#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ParticleEffectResponse : public ::EventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mEffect;
    ::ll::TypedStorage<4, 4, int>                                  mData;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleEffectResponse();

    virtual std::string const& getName() const;

    virtual void executeAction(::RenderParams&) const;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>&, ::Factory<EventResponse> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams&) const;

    MCNAPI void $buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>&,
        ::Factory<EventResponse> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

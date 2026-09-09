#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDocumentDataParams;
struct DeserializeDataParams;
// clang-format on

struct Description {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const = 0;

    virtual ~Description() = default;

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool parseDescription(::DeserializeDataParams);

    MCNAPI bool parseDescription(::ActorDocumentDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND
};

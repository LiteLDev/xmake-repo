#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SerializationTraits.h"

namespace cereal {

struct SerializationTraitsSupport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraitsOverride;
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraits;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SerializationTraitsSupport();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SerializationTraits serializationTraits() const;

    MCNAPI void serializationTraitsOverride(::cereal::SerializationTraits);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal

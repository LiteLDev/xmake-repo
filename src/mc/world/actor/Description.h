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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool parseDescription(::DeserializeDataParams);
#else // @header-generator platform
    MCAPI bool parseDescription(::ActorDocumentDataParams actorDocumentDataParams);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool parseDescription(::ActorDocumentDataParams);
#else // @header-generator platform
    MCAPI bool parseDescription(::DeserializeDataParams deserializeDataParams);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    MCFOLD void $deserializeData(::DeserializeDataParams deserializeDataParams);


#endif // @header-generator platform
    // NOLINTEND
};

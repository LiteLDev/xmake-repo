#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/resources/persona/PersonaPiece.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PersonaPiece;
struct PackIdVersion;
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct PersonaPieceMeta; }
// clang-format on

class PersonaPieceFactory {
public:
    // PersonaPieceFactory inner types define
    using MetaLoader = ::Puv::SlicedLoader<
        SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta,
        std::nullptr_t,
        std::nullptr_t,
        SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mReflectionCtx;
    ::ll::UntypedStorage<8, 240>                        mMetaLoader;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersonaPieceFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PersonaPiece
    createForClassicSkin(std::string const&, ::PackIdVersion const&, std::weak_ptr<const Pack>, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

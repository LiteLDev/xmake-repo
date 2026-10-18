#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PersonaPiece;
class SemVersion;
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

class IPersonaPiecePackLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IPersonaPiecePackLoader() = default;

    virtual bool isPieceLoaded(::mce::UUID const&) const = 0;

    virtual bool isKnownPersonaPiece(::mce::UUID const&) const = 0;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const&) const = 0;

    virtual bool isPersonaPieceLoading(::mce::UUID const&) const = 0;

    virtual bool isPersonaPieceInRepo(std::string const&) const = 0;

    virtual bool isPersonaPieceInRepo(::mce::UUID const&) const = 0;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const = 0;

    virtual void forEachPersonaPack(std::function<void (const Pack&)> const&) const = 0;

    virtual std::vector<persona::PieceOfferWrapper> getDefaultPieceWrappersOfTypes(std::vector<SharedTypes::persona::PieceType> const&) const = 0;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const&) const = 0;

    virtual void loadPiecePack(::mce::UUID) = 0;

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<std::shared_ptr<Pack>>) = 0;

    virtual std::vector<std::string> const& getPieceIdsByType(::SharedTypes::persona::PieceType) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

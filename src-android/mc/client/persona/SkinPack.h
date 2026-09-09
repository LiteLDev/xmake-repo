#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/Skin.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class Pack;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class SkinPack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Pack>>> mPack;
    ::ll::TypedStorage<8, 24, std::string>                            mName;
    ::ll::TypedStorage<8, 24, std::string>                            mLocName;
    ::ll::TypedStorage<8, 24, std::string>                            mSerializableName;
    ::ll::UntypedStorage<8, 16>                                       mGeometryData;
    ::ll::TypedStorage<1, 1, bool>                                    mRequireTrustedContent;
    ::ll::TypedStorage<8, 24, std::vector<Skin>>                      mSkins;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int addSkin(::Skin);

    MCNAPI ::Json::Value const& getGeometry() const;

    MCNAPI std::string const& getLocName() const;

    MCNAPI int getNumSkins() const;

    MCNAPI ::Pack const& getPack() const;

    MCNAPI ::PackIdVersion const& getPackIdentity() const;

    MCNAPI ::Skin const* getSkinAt(int) const;

    MCNAPI ::Skin* getSkinAtMutable(int);

    MCNAPI ::Skin const* getSkinByName(std::string const&) const;

    MCNAPI ::Skin* getSkinByNameMutable(std::string const&);

    MCNAPI std::weak_ptr<const Pack> getWeakPackPtr() const;

    MCNAPI void loadGeometry(std::string const&);

    MCNAPI void releaseGeometry();

    MCNAPI void setSkinAt(::Skin, int);

    MCNAPI ~SkinPack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getGeometryAsset(::Pack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

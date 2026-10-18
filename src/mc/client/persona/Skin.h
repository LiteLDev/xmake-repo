#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/file_watcher/FileWatcherHandle.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class MinecraftGraphics;
class SkinPack;
struct FileWatcherUpdate;
struct PackIdVersion;
namespace Core { class Path; }
namespace mce { class UUID; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class Skin {
public:
    // Skin inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SkinType : int {
        CustomDummy = 0,
        CustomUser  = 1,
        Free        = 2,
        Paid        = 3,
        Persona     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mSkinTextureName;
    ::ll::TypedStorage<8, 8, ::SkinPack const*> mSkinPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FileWatcherUpdate>> mFileWatcherUpdate;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mLocName;
    ::ll::TypedStorage<8, 24, std::string> mSerializableName;
    ::ll::TypedStorage<8, 24, std::string> mSerializableLegacyName;
    ::ll::UntypedStorage<8, 24> mCapeTextureName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mSkinImageLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mCapeImageLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mAnimationsLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mAnimationControllersLocation;
    ::ll::TypedStorage<4, 4, ::Skin::SkinType> mSkinType;
    ::ll::TypedStorage<8, 16, ::mce::FileWatcherHandle> mSkinFileWatcherHandle;
    ::ll::TypedStorage<8, 16, ::mce::FileWatcherHandle> mCapeFileWatcherHandle;
    ::ll::TypedStorage<4, 4, int> mSkinIndex;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdated;
    ::ll::TypedStorage<1, 1, bool> mIsCapeOnClassicSkin;
    ::ll::TypedStorage<8, 24, std::string> mCapeId;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSerializedSkin;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Skin();

    MCNAPI Skin(::Skin const&);

    MCNAPI Skin(::Skin&&);

    MCNAPI Skin(::SkinPack&, std::string const&, ::ResourceLocation const&, ::SerializedSkinRef&&);

    MCNAPI Skin(
        ::SkinPack&,
        std::string const&,
        ::Core::Path const&,
        ::Core::Path const&,
        std::string const&,
        ::SerializedSkinRef
    );

    MCNAPI std::string const& getCapeId() const;

    MCNAPI ::mce::Image const*
    getCapeImage(::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> const&, bool) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getCapeTextureName() const;

    MCNAPI std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
        getLastUpdated() const;

    MCNAPI std::string const& getLocName() const;

    MCNAPI std::string getNameWithCapeIdAppended() const;

    MCNAPI std::string const& getSerializableLegacyName() const;

    MCNAPI std::string const& getSerializableName() const;

    MCNAPI ::SerializedSkinRef const& getSerializedSkin() const;

    MCNAPI ::mce::Image const* getSkinImage(::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> const&) const;

    MCNAPI ::ResourceLocation const& getSkinImageLocation() const;

    MCNAPI int getSkinIndex() const;

    MCNAPI ::mce::UUID const& getSkinPackId() const;

    MCNAPI ::PackIdVersion const& getSkinPackIdVersion() const;

    MCNAPI bool isCustomSkin() const;

    MCNAPI bool isFree() const;

    MCNAPI bool isPersonaSkin() const;

    MCNAPI bool isPlatformLocked() const;

    MCNAPI bool isTitleLocked() const;

    MCNAPI bool isValid() const;

    MCNAPI ::Skin& operator=(::Skin&&);

    MCNAPI void setCapeTextureName(std::string const&, std::string const&);

    MCNAPI void setSkinImageLocation(::ResourceLocation const&);

    MCNAPI ::FileWatcherUpdate& shouldUpdate() const;

    MCNAPI void skinUpdated();

    MCNAPI ~Skin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Skin const&);

    MCNAPI void* $ctor(::Skin&&);

    MCNAPI void* $ctor(::SkinPack&, std::string const&, ::ResourceLocation const&, ::SerializedSkinRef&&);

    MCNAPI void* $ctor(
        ::SkinPack&,
        std::string const&,
        ::Core::Path const&,
        ::Core::Path const&,
        std::string const&,
        ::SerializedSkinRef
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class SkinType : int {};
#endif // @header-generator platform
};

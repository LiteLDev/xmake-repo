#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct BedrockTextureData;
namespace mce { class TexturePtr; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { struct ClientTexture; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MolangClientTextureSet {
public:
    // MolangClientTextureSet inner types declare
    // clang-format off
    struct ExtraPBRData;
    // clang-format on

    // MolangClientTextureSet inner types define
    struct ExtraPBRData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>> mMERSTextureDataWeakPtr;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>> mNormalTextureDataWeakPtr;
        ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>          mMERSUniforms;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>                        mMERSTextureMode;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode>                      mNormalTextureMode;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>> mMERSTextureDataWeakPtr;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>> mNormalTextureDataWeakPtr;
        ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>>          mMERSUniforms;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>                            mMERSTextureMode;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode>                          mNormalTextureMode;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ExtraPBRData& operator=(ExtraPBRData const&);
        ExtraPBRData();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>>              mColorTextureDataWeakPtr;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MolangClientTextureSet::ExtraPBRData>> mPBRData;
    ::ll::TypedStorage<8, 40, ::HashedString>                                       mName;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 48, ::HashedString> mData;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BedrockTextureData const>>              mColorTextureDataWeakPtr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangClientTextureSet::ExtraPBRData>> mPBRData;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mName;
#endif
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangClientTextureSet& operator=(MolangClientTextureSet const& rhs) {
        if (this != &rhs) {
            mColorTextureDataWeakPtr = rhs.mColorTextureDataWeakPtr;
            mPBRData                 = rhs.mPBRData ? std::make_unique<ExtraPBRData>(*rhs.mPBRData) : nullptr;
            mName                    = rhs.mName;
        }
        return *this;
    }
    MolangClientTextureSet();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangClientTextureSet();

    MCNAPI explicit MolangClientTextureSet(::HashedString const&);

    MCNAPI MolangClientTextureSet(::MolangClientTextureSet const&);

    MCNAPI MolangClientTextureSet(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const,
        std::optional<MERSUniformData> const&
    );

    MCNAPI ::mce::ClientTexture const& getClientMERSTexture() const;

    MCNAPI ::MERSTextureMode getClientMERSTextureMode() const;

    MCNAPI ::mce::ClientTexture const& getClientNormalTexture() const;

    MCNAPI ::NormalTextureMode getClientNormalTextureMode() const;

    MCNAPI ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI std::optional<MERSUniformData> getMERSUniforms() const;

    MCNAPI ~MolangClientTextureSet();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit MolangClientTextureSet(::HashedString const& name);

    MCAPI MolangClientTextureSet(::MolangClientTextureSet const& rhs);

    MCAPI MolangClientTextureSet(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCAPI MolangClientTextureSet(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData
    );

    MCAPI ~MolangClientTextureSet();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::HashedString const&);

    MCNAPI void* $ctor(::MolangClientTextureSet const&);

    MCNAPI void* $ctor(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI void*
    $ctor(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const
    );

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const,
        std::optional<MERSUniformData> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::HashedString const& name);

    MCAPI void* $ctor(::MolangClientTextureSet const& rhs);

    MCAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr);

    MCAPI void* $ctor(::HashedString const& name, ::mce::TexturePtr colorTexturePtr, ::mce::TexturePtr mersTexturePtr);

    MCAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::mce::TexturePtr     normalTexturePtr
    );

    MCAPI void* $ctor(
        ::HashedString const& name,
        ::mce::TexturePtr     colorTexturePtr,
        ::mce::TexturePtr     mersTexturePtr,
        ::MERSTextureMode     mersTextureMode,
        ::mce::TexturePtr     normalTexturePtr,
        ::NormalTextureMode   normalTextureMode
    );

    MCAPI void* $ctor(
        ::HashedString const&                     name,
        ::mce::TexturePtr                         colorTexturePtr,
        ::mce::TexturePtr                         mersTexturePtr,
        ::MERSTextureMode                         mersTextureMode,
        ::mce::TexturePtr                         normalTexturePtr,
        ::NormalTextureMode                       normalTextureMode,
        ::std::optional<::MERSUniformData> const& uniformData
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

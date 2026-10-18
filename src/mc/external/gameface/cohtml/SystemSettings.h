#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/cohtml/CachedResourcesWatermarks.h"
#include "mc/external/gameface/cohtml/LastResortFontMode.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceHandler; }
namespace cohtml { class IDataStorageHandler; }
namespace cohtml { class IInternationalizationManager; }
namespace cohtml { class ILocalizationManager; }
namespace cohtml { class ITextTransformationManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

struct SystemSettings {
public:
    // SystemSettings inner types declare
    // clang-format off
    struct FallBackFormats;
    // clang-format on

    // SystemSettings inner types define
    struct FallBackFormats {
    public:
        // FallBackFormats inner types declare
        // clang-format off
        struct FallBackFormat;
        // clang-format on

        // FallBackFormats inner types define
        struct FallBackFormat {};
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cohtml::SystemSettings::FallBackFormats::FallBackFormat*> Formats;
        ::ll::TypedStorage<4, 4, uint>                                                       FormatsSize;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkfc807c;
        ::ll::UntypedStorage<4, 4> mUnk96baaf;
        // NOLINTEND

    public:
        // prevent constructor by default
        FallBackFormats& operator=(FallBackFormats const&);
        FallBackFormats(FallBackFormats const&);
        FallBackFormats();
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::cohtml::SystemSettings::FallBackFormats> Formats;
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceHandler*>           ResourceHandler;
    ::ll::TypedStorage<8, 8, ::cohtml::IDataStorageHandler*>             DataStorageHandler;
    ::ll::TypedStorage<8, 8, ::cohtml::ILocalizationManager*>            LocalizationManagerInstance;
    ::ll::TypedStorage<8, 8, ::cohtml::ITextTransformationManager*>      TextTransformationManager;
    ::ll::TypedStorage<8, 8, ::cohtml::IInternationalizationManager*>    InternationalizationManager;
    ::ll::TypedStorage<4, 16, ::cohtml::CachedResourcesWatermarks>       CachedImagesSettings;
    ::ll::TypedStorage<4, 16, ::cohtml::CachedResourcesWatermarks>       CachedSVGsSettings;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)>                     OnUserImageDropped;
    ::ll::TypedStorage<8, 8, void*>                                      UserData;
    ::ll::TypedStorage<4, 4, int>                                        DebuggerPort;
    ::ll::TypedStorage<1, 1, bool>                                       EnableDebugger;
    ::ll::TypedStorage<1, 1, bool>                                       AsynchronousResourceRequestCalls;
    ::ll::TypedStorage<8, 8, char const*>                                GenericFontFamilyNameFont;
    ::ll::TypedStorage<4, 4, ::cohtml::Fonts::LastResortFontMode>        LastResortFontMode;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1ed39f;
    ::ll::UntypedStorage<8, 8>  mUnk9e46b1;
    ::ll::UntypedStorage<8, 8>  mUnkbf86b0;
    ::ll::UntypedStorage<8, 8>  mUnk1d16a2;
    ::ll::UntypedStorage<8, 8>  mUnk24fa44;
    ::ll::UntypedStorage<8, 8>  mUnk4eba72;
    ::ll::UntypedStorage<4, 16> mUnk3ec999;
    ::ll::UntypedStorage<4, 16> mUnkd04d4f;
    ::ll::UntypedStorage<8, 8>  mUnk7395bc;
    ::ll::UntypedStorage<8, 8>  mUnkef2bf7;
    ::ll::UntypedStorage<4, 4>  mUnk3d526f;
    ::ll::UntypedStorage<1, 1>  mUnk104bb4;
    ::ll::UntypedStorage<1, 1>  mUnka48961;
    ::ll::UntypedStorage<8, 8>  mUnk2247b8;
    ::ll::UntypedStorage<4, 4>  mUnk5081fc;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemSettings& operator=(SystemSettings const&);
    SystemSettings(SystemSettings const&);
    SystemSettings();
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml

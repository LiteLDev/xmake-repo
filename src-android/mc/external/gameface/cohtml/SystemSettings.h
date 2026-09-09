#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cohtml::SystemSettings::FallBackFormats::FallBackFormat*> Formats;
        ::ll::TypedStorage<4, 4, uint>                                                       FormatsSize;
        // NOLINTEND
    };

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
};

} // namespace cohtml

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#include "mc/deps/input/application_signal/ClipboardCopyData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { struct ClipboardCopyData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ApplicationSignal {

#if defined(LL_PLAT_A) // @header-generator platform
class ClipboardCopy : public ::Bedrock::Signal<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardCopyData> {
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ClipboardCopy
: public ::Bedrock::Signal<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardCopyData> {};
#else // @header-generator platform
class ClipboardCopy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ApplicationSignal

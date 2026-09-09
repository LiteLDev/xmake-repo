#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NsaId.h"
#include "mc/platform/PsnId.h"
#include "mc/platform/Xuid.h"

namespace Social {

struct OnlineId : public ::std::variant<Social::Xuid, Social::PsnId, Social::NsaId> {};

} // namespace Social

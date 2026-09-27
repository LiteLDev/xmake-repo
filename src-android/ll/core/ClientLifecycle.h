#pragma once

namespace ll::android {
// Called only by the PL enable phase before MinecraftActivity is created.
// The parent LL remains resident; this binding is not a general unhook API.
bool installClientReadyHook() noexcept;
} // namespace ll::android

/**
 * @file
 * Config used by libmbox
 *
 * @authors
 * Copyright (C) 2020 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @page mbox_config Config used by libmbox
 *
 * Config used by libmbox
 */

#include "config.h"
#include <stddef.h>
#include <config/lib.h>
#include <stdbool.h>

// clang-format off
bool C_CheckMboxSize; ///< Config: (mbox,mmdf) Use mailbox size as an indicator of new mail
// clang-format on

// clang-format off
struct ConfigDef MboxVars[] = {
  { "check_mbox_size", DT_BOOL, &C_CheckMboxSize, false },
  { NULL, 0, NULL, 0, 0, NULL },
};
// clang-format on

/**
 * config_init_mbox - Register mbox config variables
 */
bool config_init_mbox(struct ConfigSet *cs)
{
  return cs_register_variables(cs, MboxVars, 0);
}
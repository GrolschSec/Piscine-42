# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 11:11:19 by rlouvrie          #+#    #+#              #
#    Updated: 2022/03/08 12:34:26 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
find . -type f -name '*.sh' | xargs -n 1 basename -s '.sh'

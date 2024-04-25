/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */
// exercice 5.5
// auteur : Amin Belguidoum
// date : octobre 2023
// objectif : Mettre à jour les fichiers client.c et serveur.c pour prendre en charge les calculs simples (+, -, *, ...) entre le client et le serveur en utilisant un nouveau format de message.

#ifndef __SERVER_H__
#define __SERVER_H__

#define PORT 8089

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd);

#endif

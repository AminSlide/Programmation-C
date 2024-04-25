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
#ifndef __CLIENT_H__
#define __CLIENT_H__

/*
 * port d'ordinateur pour envoyer et recevoir des messages
 */
#define PORT 8089

/* 
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */
int envoie_recois_message(int socketfd);

#endif
